#define WIN32_LEAN_AND_MEAN

#include <ipc.h>

#include <csharp_bridge.h>
#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <uber_states\uber_state_manager.h>

#include <windows.h>
#include <stdio.h> 
#include <tchar.h>
#include <strsafe.h>

#include <array>
#include <iostream>
#include <mutex>
#include <string>
#include <vector>
#include <json/json.hpp>

using namespace modloader;

namespace ipc
{
#define SYNCHRONOUS 1
#if SYNCHRONOUS == 1
    namespace
    {
        std::thread ipc_thread;
        std::mutex message_mutex;
        std::mutex send_mutex;
        std::vector<std::string> sends;
        std::vector<std::string> messages;

        HANDLE connect(int buffer_size)
        {
            HANDLE pipe = CreateNamedPipeA(
                "\\\\.\\pipe\\wotw_rando",
                PIPE_ACCESS_DUPLEX | FILE_FLAG_FIRST_PIPE_INSTANCE,
                PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT | PIPE_REJECT_REMOTE_CLIENTS,
                1,
                0,
                buffer_size * sizeof(char),
                0,
                nullptr
            );

            if (pipe == nullptr || pipe == INVALID_HANDLE_VALUE)
            {
                warn("ipc", "Failed to create pipe.");
                CloseHandle(pipe);
                return nullptr;
            }

            auto result = ConnectNamedPipe(pipe, nullptr);
            if (!result)
            {
                warn("ipc", "Failed to connect to pipe.");
                CloseHandle(pipe);
                return nullptr;
            }

            return pipe;
        }

        void disconnect(HANDLE pipe)
        {
            CloseHandle(pipe);
        }

        void pipe_handler()
        {
            DWORD bytes_read = 0;
            DWORD bytes_written = 0;
            std::array<char, 64> message;
            HANDLE pipe = connect(message.size());
            if (pipe == nullptr || pipe == INVALID_HANDLE_VALUE)
                return;

            while (!shutdown_thread)
            {
                DWORD bytes_available = 0;
                if (!PeekNamedPipe(pipe, nullptr, 0, nullptr, &bytes_available, nullptr))
                {
                    auto error = GetLastError();
                    if (error == ERROR_BROKEN_PIPE ||
                        error == ERROR_PIPE_NOT_CONNECTED ||
                        error == ERROR_INVALID_HANDLE)
                    {
                        warn("ipc", format("Failed to peek at pipe (%d).", error));
                        disconnect(pipe);
                        pipe = connect(message.size());
                        if (pipe == nullptr || pipe == INVALID_HANDLE_VALUE)
                            return;
                    }
                }

                if (bytes_available != 0)
                {
                    auto result = ReadFile(
                        pipe,
                        message.data(),
                        message.size() - 1,
                        &bytes_read,
                        nullptr
                    );

                    if (!result || bytes_read == 0)
                    {
                        auto error = GetLastError();
                        warn("ipc", format("Failed to read data (%d).", error));
                    }
                    else
                    {
                        message[bytes_read] = '\0';
                        std::string str = message.data();
                        trim(str);
                        message_mutex.lock();
                        messages.push_back(std::move(str));
                        message_mutex.unlock();
                    }
                }

                send_mutex.lock();
                auto local_sends = sends;
                sends.clear();
                send_mutex.unlock();
                for (auto message : local_sends)
                {
                    auto result = WriteFile(
                        pipe,
                        message.data(),
                        message.size(),
                        &bytes_written,
                        nullptr
                    );

                    if (!result || bytes_written == 0)
                    {
                        auto error = GetLastError();
                        warn("ipc", format("Failed to write data (%d).", error));
                    }
                }
            }

            disconnect(pipe);
        }

        void start_ipc_thread()
        {
            ipc_thread = std::thread(pipe_handler);
        }

        CALL_ON_INIT(start_ipc_thread);
    }

    using message_handler = void(*)(nlohmann::json& j);
    std::unordered_map<std::string, message_handler> handlers;

    void update_pipe()
    {
        message_mutex.lock();
        auto local_messages = messages;
        messages.clear();
        message_mutex.unlock();

        for (auto const& message : local_messages)
        {
            try
            {
                nlohmann::json j(message);
                auto it = handlers.find(j.at("event").get<std::string>());
                if (it != handlers.end())
                    it->second(j);
                else
                    info("ipc", format("Received unknown action request: %s", message.c_str()));
            }
            catch (std::exception ex)
            {
                warn("ipc", "Error parsing ipc message.");
                info("ipc", ex.what());
            }
        }
    }

    void send_message(std::string_view message)
    {
        send_mutex.lock();
        sends.push_back(std::string(message));
        send_mutex.unlock();
    }

    void reload(nlohmann::json& j)
    {
        info("ipc", "Received reload action request.");
        csharp_bridge::on_action_triggered(input::Action::Reload);
    }

    void get_uberstates(nlohmann::json& j)
    {
        std::vector<float> values;
        for (auto entry : j["payload"])
        {
            auto group = entry.at("group").get<int>();
            auto state = entry.at("state").get<int>();
            values.push_back(uber_states::get_uber_state_value(group, state));
        }

        nlohmann::json response;
        response["event"] = "get_uberstates";
        response["payload"] = values;
        send_message(response.dump());
    }

    void initialize()
    {
        handlers["reload"] = reload;
        handlers["get_uberstates"] = get_uberstates;
    }

    CALL_ON_INIT(initialize);
#else
    namespace
    {
        enum class State
        {
            Initialize,
            StartConnect,
            Connected,
            Reading,
            ReadFinished,
            Disconnected,
            Errored
        };

        State state = State::Initialize;
        HANDLE pipe = INVALID_HANDLE_VALUE;
        DWORD bytes_read;
        OVERLAPPED overlapped;
        std::array<char, 64> message;

        void process_message(std::string request)
        {
            if (request == "reload")
            {
                info("ipc", "Received reload action request.");
                csharp_bridge::on_action_triggered(input::Action::Reload);
            }
        }
    }

    void update_pipe()
    {
        if (state == State::Initialize)
        {
            pipe = CreateNamedPipeW(
                L"\\\\.\\pipe\\wotw_rando",
                PIPE_ACCESS_INBOUND | FILE_FLAG_FIRST_PIPE_INSTANCE | FILE_FLAG_OVERLAPPED,
                PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT | PIPE_REJECT_REMOTE_CLIENTS,
                1,
                message.size() * sizeof(char),
                message.size() * sizeof(char),
                0,
                nullptr
            );

            overlapped = {};
            overlapped.hEvent = CreateEventW(NULL, FALSE, TRUE, NULL);
            state = State::StartConnect;
            bytes_read = 0;
        }
        else if (state == State::Errored)
            return;

        int wait = WaitForSingleObject(overlapped.hEvent, 0);
        if (wait == WAIT_OBJECT_0)
        {
            bool blocking = false;
            while (!blocking)
            {
                switch (state)
                {
                case State::StartConnect:
                    info("ipc", "Connecting to pipe.");
                    if (ConnectNamedPipe(pipe, &overlapped))
                        state = State::Connected;
                    else
                    {
                        int err = GetLastError();
                        if (err == ERROR_IO_PENDING)
                        {
                            state = State::Connected;
                            blocking = true;
                        }
                        else if (err == ERROR_PIPE_CONNECTED)
                            state = State::Connected;
                        else if (err != ERROR_SUCCESS) // waiting for pipe connection.
                        {
                            warn("ipc", format("Encountered error while connecting (%d).", err));
                            state = State::Errored;
                        }
                    }
                    break;
                case State::Connected:
                    if (ReadFile(pipe, message.data(), message.size(), &bytes_read, &overlapped))
                        state = State::ReadFinished;
                    else
                    {
                        int err = GetLastError();
                        if (err == ERROR_IO_PENDING)
                        {
                            state = State::Reading;
                            blocking = true;
                        }
                        else if (err == ERROR_BROKEN_PIPE)
                            state = State::Disconnected;
                        else
                        {
                            warn("ipc", format("Encountered error while starting read (%d).", err));
                            state = State::Errored;
                        }
                    }
                    break;
                case State::Reading:
                    if (GetOverlappedResult(pipe, &overlapped, &bytes_read, TRUE))
                        state = State::ReadFinished;
                    else
                    {
                        int err = GetLastError();
                        if (err == ERROR_BROKEN_PIPE)
                            state = State::Disconnected;
                        else
                        {
                            warn("ipc", format("Encountered error while reading (%d).", err));
                            state = State::Errored;
                        }
                    }
                    break;
                case State::ReadFinished:
                    info("ipc", "Command read from pipe.");
                    message[bytes_read + 1] = '\0';
                    process_message(message.data());
                    state = State::Connected;
                    break;
                case State::Disconnected:
                    info("ipc", "Pipe disconnected.");
                    DisconnectNamedPipe(pipe);
                    state = State::StartConnect;
                    break;
                }
            }
        }
        else if (wait != WAIT_TIMEOUT)
        {
            warn("ipc", format("Encountered error while waiting (%d).", wait));
            state = State::Errored;
        }
    }
#endif
}

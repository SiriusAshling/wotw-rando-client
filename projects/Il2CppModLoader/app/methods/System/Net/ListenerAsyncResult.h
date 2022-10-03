#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::ListenerAsyncResult {
    IL2CPP_REGISTER_METHOD(0x01E6C530, void, ctor, (app::ListenerAsyncResult * this_ptr, app::AsyncCallback* cb, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01E6C690, void, Complete_1, (app::ListenerAsyncResult * this_ptr, app::Exception* exc))
    IL2CPP_REGISTER_METHOD(0x01E6C970, void, InvokeCallback, (app::Object * o))
    IL2CPP_REGISTER_METHODINFO(0x047010A8, ListenerAsyncResult_InvokeCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E6CAB0, void, Complete_2, (app::ListenerAsyncResult * this_ptr, app::HttpListenerContext* context))
    IL2CPP_REGISTER_METHOD(0x01E6CAC0, void, Complete_3, (app::ListenerAsyncResult * this_ptr, app::HttpListenerContext* context, bool synch))
    IL2CPP_REGISTER_METHOD(0x01E6D230, app::HttpListenerContext*, GetContext, (app::ListenerAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047940C8, ListenerAsyncResult_GetContext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E6D2E0, app::Object*, get_AsyncState, (app::ListenerAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6D300, app::WaitHandle*, get_AsyncWaitHandle, (app::ListenerAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6D560, bool, get_CompletedSynchronously, (app::ListenerAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6D580, bool, get_IsCompleted, (app::ListenerAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6D690, void, cctor, ())
} // namespace app::classes::System::Net::ListenerAsyncResult

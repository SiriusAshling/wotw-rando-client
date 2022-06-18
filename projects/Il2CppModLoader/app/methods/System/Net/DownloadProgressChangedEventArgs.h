#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::DownloadProgressChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01EB4050, void, ctor_1, (app::DownloadProgressChangedEventArgs * this_ptr, int32_t progress_percentage, app::Object * user_token, int64_t bytes_received, int64_t total_bytes_to_receive))
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_BytesReceived, (app::DownloadProgressChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_TotalBytesToReceive, (app::DownloadProgressChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EB4080, void, ctor_2, (app::DownloadProgressChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473AB38, DownloadProgressChangedEventArgs__ctor_1__MethodInfo)
}
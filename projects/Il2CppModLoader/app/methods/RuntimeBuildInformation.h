#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RuntimeBuildInformation {
    IL2CPP_REGISTER_METHOD(0x01373490, app::String *, ToString, (app::RuntimeBuildInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013746F0, void, ctor, (app::RuntimeBuildInformation * this_ptr))
}
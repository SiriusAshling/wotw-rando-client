#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinLocalSpeedAction {
    IL2CPP_REGISTER_METHOD(0x008926C0, void, Perform, (app::SeinLocalSpeedAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008927B0, void, ctor, (app::SeinLocalSpeedAction * this_ptr))
}
#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::Demos::Turret {
    IL2CPP_REGISTER_METHOD(0x02049F90, void, Update, (app::Turret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Turret * this_ptr))
}
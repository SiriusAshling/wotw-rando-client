#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DisableOnKill {
    IL2CPP_REGISTER_METHOD(0x00443C10, void, OnKill, (app::DisableOnKill * this_ptr, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DisableOnKill * this_ptr))
} // namespace app::classes::DisableOnKill

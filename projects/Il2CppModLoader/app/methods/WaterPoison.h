#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WaterPoison {
    IL2CPP_REGISTER_METHOD(0x008D8780, int32_t, GetWaterPoisonCount, ())
    IL2CPP_REGISTER_METHOD(0x008D8830, app::List_1_Damage_*, GetDamages, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x008D8B70, void, cctor, ())
} // namespace app::classes::WaterPoison

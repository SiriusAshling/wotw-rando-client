#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AcidSlugEnemy {
    IL2CPP_REGISTER_METHOD(0x004C2860, void, FixedUpdate, (app::AcidSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C2B80, void, Awake, (app::AcidSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C2BA0, void, Start, (app::AcidSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C3670, void, DropAcid, (app::AcidSlugEnemy * this_ptr, float speed, app::Vector3 direction))
    IL2CPP_REGISTER_METHOD(0x004C3960, void, OnShoot, (app::AcidSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047426E0, AcidSlugEnemy_OnShoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004C3F50, void, ctor, (app::AcidSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C40A0, bool, _Start_b__10_0, (app::AcidSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D630, AcidSlugEnemy__Start_b__10_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004C40F0, bool, _Start_b__10_2, (app::AcidSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04788D30, AcidSlugEnemy__Start_b__10_2__MethodInfo)
} // namespace app::classes::AcidSlugEnemy

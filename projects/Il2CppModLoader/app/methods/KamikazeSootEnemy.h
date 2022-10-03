#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KamikazeSootEnemy {
    IL2CPP_REGISTER_METHOD(0x00E60AA0, bool, CanBeOptimized, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E60AE0, void, ForceAttackPlayer, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E60B30, bool, DamageTypeIsBash, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047703F8, KamikazeSootEnemy_DamageTypeIsBash__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E60C80, void, Start, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E62640, void, OnModifyDamage, (app::KamikazeSootEnemy * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHODINFO(0x0476FE48, KamikazeSootEnemy_OnModifyDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E628A0, void, FixedUpdate, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0093E970, void, OnTimedRespawn, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E62B60, void, UpdateRotation, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E62D40, void, AccelerateForwards, (app::KamikazeSootEnemy * this_ptr, float acceleration, float max_speed))
    IL2CPP_REGISTER_METHOD(0x00E62E00, void, ApplyGravity, (app::KamikazeSootEnemy * this_ptr, float gravity, float max_fall_speed))
    IL2CPP_REGISTER_METHOD(0x00E62E70, void, Decelerate, (app::KamikazeSootEnemy * this_ptr, float deceleration))
    IL2CPP_REGISTER_METHOD(0x00E62ED0, void, OnWallCollision, (app::KamikazeSootEnemy * this_ptr, app::Vector3 normal, float strength, app::Collider* collider))
    IL2CPP_REGISTER_METHODINFO(0x0476DEA8, KamikazeSootEnemy_OnWallCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E62EE0, void, OnGroundCollision, (app::KamikazeSootEnemy * this_ptr, app::Vector3 normal, float strength, app::Collider* collider))
    IL2CPP_REGISTER_METHODINFO(0x0470CE08, KamikazeSootEnemy_OnGroundCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E62F00, void, OnDamageDealt, (app::KamikazeSootEnemy * this_ptr, app::DamageDealer* dealer, app::DamageResult result))
    IL2CPP_REGISTER_METHODINFO(0x04729668, KamikazeSootEnemy_OnDamageDealt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E63040, void, SelfDestruct, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E63420, bool, InRange, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727CA8, KamikazeSootEnemy_InRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E635B0, bool, OutOfRange, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E63660, void, ctor, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E637B0, void, _Start_b__14_0, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047896A8, KamikazeSootEnemy__Start_b__14_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00728F70, bool, _Start_b__14_1, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780100, KamikazeSootEnemy__Start_b__14_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E63810, bool, _Start_b__14_2, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B0D0, KamikazeSootEnemy__Start_b__14_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E63860, void, _Start_b__14_3, (app::KamikazeSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724068, KamikazeSootEnemy__Start_b__14_3__MethodInfo)
} // namespace app::classes::KamikazeSootEnemy

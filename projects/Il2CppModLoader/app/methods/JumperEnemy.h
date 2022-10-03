#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::JumperEnemy {
    IL2CPP_REGISTER_METHOD(0x00E52DE0, app::JumperEnemyPuppet*, get_Puppet, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E52EA0, bool, CanBeOptimized, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E52EE0, void, ForceAttackPlayer, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E52F30, void, Start, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A39740, void, OnTimedRespawn, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E56250, bool, OutOfJumpingZone, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756D18, JumperEnemy_OutOfJumpingZone__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00728F70, bool, IsOnGround, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A900, JumperEnemy_IsOnGround__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E56510, bool, ShouldThrow, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733B48, JumperEnemy_ShouldThrow__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E56640, bool, ShouldStomped, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704368, JumperEnemy_ShouldStomped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E56780, bool, ShouldFreeze, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E568C0, bool, IsSlashDamage, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748158, JumperEnemy_IsSlashDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E56A00, void, OnThrow, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717CC0, JumperEnemy_OnThrow__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E56D80, void, OnStomped, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726460, JumperEnemy_OnStomped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E570B0, void, DoJump, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FF10, JumperEnemy_DoJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E578A0, bool, PlayerInRange, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729798, JumperEnemy_PlayerInRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E57920, void, FixedUpdate, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E57ED0, void, UpdateRotation, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E581F0, bool, LandedOnGround, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E58260, void, OnLanded, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772D80, JumperEnemy_OnLanded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E58A20, void, ctor, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E58B70, void, _Start_b__16_0, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D0E8, JumperEnemy__Start_b__16_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E58BD0, bool, _Start_b__16_1, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047091F0, JumperEnemy__Start_b__16_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E58C20, bool, _Start_b__16_2, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765C90, JumperEnemy__Start_b__16_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E58CA0, bool, _Start_b__16_3, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F598, JumperEnemy__Start_b__16_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E58D20, bool, _Start_b__16_4, (app::JumperEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470CFA0, JumperEnemy__Start_b__16_4__MethodInfo)
} // namespace app::classes::JumperEnemy

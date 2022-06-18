#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinGrabWall {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity *, get_CharacterGravity, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD1280, app::PlatformMovementListOfColliders *, get_ListOfCollidedObjects, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement *, get_PlatformMovement, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CC310, app::SeinGrabWallPuppet *, get_Puppet, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CC3D0, bool, get_KeepMovingInput, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CC630, void, Start, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CCBD0, void, OnDestroy, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CD180, void, OnWallJump, (app::SeinGrabWall * this_ptr, app::Vector2 speed))
    IL2CPP_REGISTER_METHODINFO(0x04779FA8, SeinGrabWall_OnWallJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006EF310, void, OnDamageKickback, (app::SeinGrabWall * this_ptr, app::Damage * dmg))
    IL2CPP_REGISTER_METHODINFO(0x0477FAE8, SeinGrabWall_OnDamageKickback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014CD1C0, void, ModifyGravityPlatformMovementSettings, (app::SeinGrabWall * this_ptr, app::GravityPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHODINFO(0x04732790, SeinGrabWall_ModifyGravityPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014CD260, bool, get_IsNotMoving, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CD2C0, void, ModifyHorizontalPlatformMovementSettings, (app::SeinGrabWall * this_ptr, app::HorizontalPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHODINFO(0x04784230, SeinGrabWall_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014CD470, void, OnExit, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CD4B0, void, OnGrabWall, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CD6F0, void, OnReleaseWall, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17790, bool, get_IsStatePerforming, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17790, bool, get_IsGrabbing, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CD990, void, set_IsGrabbing, (app::SeinGrabWall * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x014CD9C0, void, UpdateGrabbing, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CEE50, int32_t, get_GlueLevel, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CEF10, bool, get_GlueEquipped, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CEFD0, bool, get_NearPushBlock, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CF0A0, bool, get_CanClimb, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CF170, void, UpdateCharacterState, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CF4C0, bool, get_WantToGrab, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CF4D0, bool, get_CanGrab, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CFED0, bool, get_ShouldGrabWallUpAnimationPlay, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CFF40, bool, get_ShouldGrabWallDownAnimationPlay, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CFFB0, bool, get_ShouldGrabWallAwayAnimationPlay, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D0030, bool, get_ShouldGrabWallIdleAnimationPlay, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014CFED0, bool, ShouldGrabWallUpAnimationKeepPlaying, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741740, SeinGrabWall_ShouldGrabWallUpAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014CFF40, bool, ShouldGrabWallDownAnimationKeepPlaying, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763300, SeinGrabWall_ShouldGrabWallDownAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014CFFB0, bool, ShouldGrabWallAwayAnimationKeepPlaying, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A920, SeinGrabWall_ShouldGrabWallAwayAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014D0030, bool, ShouldGrabWallIdleAnimationKeepPlaying, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04720038, SeinGrabWall_ShouldGrabWallIdleAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014D00B0, bool, get_IsGrabbingAway, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D0270, void, HandleWallClimbUpSteps, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D0490, void, HandleWallClimbDownSteps, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D08B0, void, OnSetReferenceToSein, (app::SeinGrabWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D0980, void, ctor, (app::SeinGrabWall * this_ptr))
}
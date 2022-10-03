#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KuLogicCycle {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowJumpSustain, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowUpwardsDeceleration, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowForceController, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowGravity, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowGravityToGround, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowOriMount, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowInstantStop, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123C650, bool, get_AllowLeftRightMovement, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123C6A0, bool, get_AllowFootsteps, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123C700, bool, get_AllowFall, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowLand, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowGrabBlock, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123CA30, bool, get_AllowIdle, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123CD10, bool, get_AllowRun, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123CF40, bool, get_AllowCrouching, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123D0C0, bool, get_AllowLookUp, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123D240, bool, get_IsInteracting, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123D430, bool, get_AllowJumping, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123D5E0, bool, get_AllowDoubleJump, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123D6F0, bool, get_AllowGliding, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123D8A0, bool, get_AllowWindAttack, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowDash, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123DA70, bool, get_AllowBowAttack, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123DBC0, bool, get_AllowMeditate, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowStandingOnEdge, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123DCB0, bool, get_AllowPushAgainstWall, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_KuState_*, GetStates, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123DD10, void, RegisterCharacterState, (app::KuLogicCycle * this_ptr, app::KuState* state))
    IL2CPP_REGISTER_METHOD(0x0123DF40, void, UnregisterCharacterState, (app::KuLogicCycle * this_ptr, app::KuState* state))
    IL2CPP_REGISTER_METHOD(0x0123E0F0, void, RegisterExecutionOrder, (app::KuLogicCycle * this_ptr, app::Type* type, int32_t order))
    IL2CPP_REGISTER_METHOD(0x0123E210, void, RegisterDefaultExecutionOrder, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123E3F0, void, RegisterIsAllowedDelegate, (app::KuLogicCycle * this_ptr, app::Type* type, app::KuLogicCycle_IsAllowedDelegate* is_allowed))
    IL2CPP_REGISTER_METHOD(0x0123E510, void, RegisterIsAllowedDelegates, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123F3C0, bool, ValidateExclusiveActiveStateType, (app::KuLogicCycle * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0123F540, void, RegisterExclusiveActiveStateType, (app::KuLogicCycle * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0123F780, void, RegisterExclusiveActiveStateTypes, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123F840, void, Awake, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123F980, void, OnDestroy, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123FA20, void, Start, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123FAC0, void, OnEnable, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123FB60, void, OnUpdate, (app::KuLogicCycle * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x01240260, void, SetStateActive, (app::KuLogicCycle * this_ptr, app::KuState* state, bool active))
    IL2CPP_REGISTER_METHOD(0x012403B0, void, UpdateCharacterState, (app::KuLogicCycle * this_ptr, app::KuState* state))
    IL2CPP_REGISTER_METHOD(0x012404C0, bool, IsPerforming, (app::KuLogicCycle * this_ptr, app::KuState* state))
    IL2CPP_REGISTER_METHOD(0x012404F0, void, OnGUI, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01240940, void, ctor, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__65_0, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E090, KuLogicCycle__RegisterIsAllowedDelegates_b__65_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01240FE0, bool, _RegisterIsAllowedDelegates_b__65_1, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F2B0, KuLogicCycle__RegisterIsAllowedDelegates_b__65_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01240FF0, bool, _RegisterIsAllowedDelegates_b__65_2, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774970, KuLogicCycle__RegisterIsAllowedDelegates_b__65_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0123D5E0, bool, _RegisterIsAllowedDelegates_b__65_3, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739E60, KuLogicCycle__RegisterIsAllowedDelegates_b__65_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01241000, bool, _RegisterIsAllowedDelegates_b__65_4, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A680, KuLogicCycle__RegisterIsAllowedDelegates_b__65_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__65_5, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CE58, KuLogicCycle__RegisterIsAllowedDelegates_b__65_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01241010, bool, _RegisterIsAllowedDelegates_b__65_6, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705388, KuLogicCycle__RegisterIsAllowedDelegates_b__65_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01241020, bool, _RegisterIsAllowedDelegates_b__65_7, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476EB10, KuLogicCycle__RegisterIsAllowedDelegates_b__65_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01241030, bool, _RegisterIsAllowedDelegates_b__65_8, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796DD0, KuLogicCycle__RegisterIsAllowedDelegates_b__65_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01241040, bool, _RegisterIsAllowedDelegates_b__65_9, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785F48, KuLogicCycle__RegisterIsAllowedDelegates_b__65_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01241050, bool, _RegisterIsAllowedDelegates_b__65_10, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798708, KuLogicCycle__RegisterIsAllowedDelegates_b__65_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0123DCB0, bool, _RegisterIsAllowedDelegates_b__65_11, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793090, KuLogicCycle__RegisterIsAllowedDelegates_b__65_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0123DBC0, bool, _RegisterIsAllowedDelegates_b__65_12, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478F438, KuLogicCycle__RegisterIsAllowedDelegates_b__65_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01241060, bool, _RegisterIsAllowedDelegates_b__65_13, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713C70, KuLogicCycle__RegisterIsAllowedDelegates_b__65_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _RegisterIsAllowedDelegates_b__65_14, (app::KuLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737BB8, KuLogicCycle__RegisterIsAllowedDelegates_b__65_14__MethodInfo)
} // namespace app::classes::KuLogicCycle

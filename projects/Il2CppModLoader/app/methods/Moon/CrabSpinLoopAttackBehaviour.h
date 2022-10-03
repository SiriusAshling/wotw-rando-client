#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::CrabSpinLoopAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00CCD280, void, OnEnter, (app::CrabSpinLoopAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCD6E0, app::BehaviourStatus__Enum, OnExecute, (app::CrabSpinLoopAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCD810, void, OnExit, (app::CrabSpinLoopAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCDA00, void, ChangeState, (app::CrabSpinLoopAttackBehaviour * this_ptr, app::CrabSpinLoopAttackBehaviour_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00CCDB70, void, UpdateState, (app::CrabSpinLoopAttackBehaviour * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00CCDB90, void, OnStartTimelineStopped, (app::CrabSpinLoopAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E5C8, CrabSpinLoopAttackBehaviour_OnStartTimelineStopped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CCDBA0, void, OnLoopTimelineStopped, (app::CrabSpinLoopAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E580, CrabSpinLoopAttackBehaviour_OnLoopTimelineStopped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CCDBF0, void, OnEndTimelineStopped, (app::CrabSpinLoopAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794578, CrabSpinLoopAttackBehaviour_OnEndTimelineStopped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CCDBF0, void, OnDizzyTimelineStopped, (app::CrabSpinLoopAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751CE0, CrabSpinLoopAttackBehaviour_OnDizzyTimelineStopped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CCDC10, void, CacheSerializedComponents, (app::CrabSpinLoopAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCDDE0, void, CacheCancellableAnimators, (app::CrabSpinLoopAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCE200, float, GetMoveDelta, (app::CrabSpinLoopAttackBehaviour * this_ptr, float direction, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartAttackTimeline, (app::CrabSpinLoopAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCE220, bool, ShouldFinishMovement, (app::CrabSpinLoopAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCE230, void, OnWeaponStickCollision, (app::CrabSpinLoopAttackBehaviour * this_ptr, app::Collider* collider, app::Vector3 overlap_center, app::Vector3 direction, app::Vector3 damage_position))
    IL2CPP_REGISTER_METHOD(0x00CCE410, void, ctor, (app::CrabSpinLoopAttackBehaviour * this_ptr))
} // namespace app::classes::Moon::CrabSpinLoopAttackBehaviour

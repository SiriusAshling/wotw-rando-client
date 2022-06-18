#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoveToBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x0111C260, void, OnEnter, (app::MoveToBehaviourNew * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0111C3E0, app::BehaviourStatus__Enum, OnExecute, (app::MoveToBehaviourNew * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0111C700, void, OnExit, (app::MoveToBehaviourNew * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0111C7B0, app::IEntityLocomotion *, get_Locomotion, (app::MoveToBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111C7E0, void, ctor, (app::MoveToBehaviourNew * this_ptr))
}
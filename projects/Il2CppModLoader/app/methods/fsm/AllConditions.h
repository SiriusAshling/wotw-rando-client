#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::fsm::AllConditions {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_1, (app::AllConditions_1 * this_ptr, app::ICondition__Array* conditions))
    IL2CPP_REGISTER_METHOD(0x00F6C570, void, ctor_2, (app::AllConditions_1 * this_ptr, app::Func_1_Boolean___Array* conditions))
    IL2CPP_REGISTER_METHOD(0x00F6C810, bool, Validate, (app::AllConditions_1 * this_ptr, app::IContext* context))
} // namespace app::classes::fsm::AllConditions

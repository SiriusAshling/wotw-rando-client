#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Expression1_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ParameterCount, (app::Expression1_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025432D0, void, ctor, (app::Expression1_1_System_Object_ * this_ptr, app::Expression* body, app::ParameterExpression* par0))
    IL2CPP_REGISTER_METHOD(0x02543310, app::ParameterExpression*, GetParameter, (app::Expression1_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04737B78, Expression1_1_System_Object__GetParameter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025433C0, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, GetOrMakeParameters, (app::Expression1_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025433D0, app::Expression_1_System_Object_*, Rewrite, (app::Expression1_1_System_Object_ * this_ptr, app::Expression* body, app::ParameterExpression__Array* parameters))
} // namespace app::classes::System::Linq::Expressions::Expression1_1_System_Object_

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Comparer_1_AttackTokens_Request_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_AttackTokens_Request_ *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02C93270, app::Comparer_1_AttackTokens_Request_ *, Create, (app::Comparison_1_AttackTokens_Request_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04785878, Comparer_1_AttackTokens_Request__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C93470, app::Comparer_1_AttackTokens_Request_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02808F10, int32_t, IComparer_Compare, (app::Comparer_1_AttackTokens_Request_ * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_AttackTokens_Request_ * this_ptr))
}
#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Char_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Char_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0282B410, app::Comparer_1_System_Char_*, Create, (app::Comparison_1_Char_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04718AE0, Comparer_1_System_Char__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0282B610, app::Comparer_1_System_Char_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x0282BBE0, int32_t, IComparer_Compare, (app::Comparer_1_System_Char_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Char_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Char_

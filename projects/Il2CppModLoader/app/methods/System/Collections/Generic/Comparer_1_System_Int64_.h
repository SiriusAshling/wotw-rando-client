#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Comparer_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Int64_ *, get_Default, ())
    IL2CPP_REGISTER_METHODINFO(0x047557C8, Comparer_1_System_Int64__get_Default__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C1780, app::Comparer_1_System_Int64_ *, Create, (app::Comparison_1_Int64_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04796AF8, Comparer_1_System_Int64__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C1980, app::Comparer_1_System_Int64_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028C1F50, int32_t, IComparer_Compare, (app::Comparer_1_System_Int64_ * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Int64_ * this_ptr))
}
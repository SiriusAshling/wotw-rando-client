#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Vector3Ser_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Vector3Ser *, get_Item, (app::List_1_Vector3Ser_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04788C30, List_1_Vector3Ser__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Vector3Ser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047797D8, List_1_Vector3Ser__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Vector3Ser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740338, List_1_Vector3Ser___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Vector3Ser_ * this_ptr, app::Vector3Ser * item))
    IL2CPP_REGISTER_METHODINFO(0x0470D178, List_1_Vector3Ser__Add__MethodInfo)
}
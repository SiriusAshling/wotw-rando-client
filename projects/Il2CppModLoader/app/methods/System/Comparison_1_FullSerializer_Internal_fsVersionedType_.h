#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_FullSerializer_Internal_fsVersionedType_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::fsVersionedType x, app::fsVersionedType y))
    IL2CPP_REGISTER_METHOD(0x02B887A0, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::fsVersionedType x, app::fsVersionedType y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::IAsyncResult * result))
}
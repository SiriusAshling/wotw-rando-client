#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B34D70, app::Object *, Invoke, (app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_ * this_ptr, app::UTF8StringPtr arg))
    IL2CPP_REGISTER_METHOD(0x02FA3F90, app::IAsyncResult *, BeginInvoke, (app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_ * this_ptr, app::UTF8StringPtr arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_ * this_ptr, app::IAsyncResult * result))
}
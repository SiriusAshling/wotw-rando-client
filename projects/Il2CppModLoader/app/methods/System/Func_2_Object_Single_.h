#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_2_Object_Single_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_Single_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F9FB10, float, Invoke, (app::Func_2_Object_Single_ * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Func_2_Object_Single_ * this_ptr, app::Object* arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::Func_2_Object_Single_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Object_Single_

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Action_2_ByteEnum_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_ByteEnum_ByteEnum_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C0FEA0, void, Invoke, (app::Action_2_ByteEnum_ByteEnum_ * this_ptr, app::ByteEnum__Enum arg1, app::ByteEnum__Enum arg2))
    IL2CPP_REGISTER_METHOD(0x02C102F0, app::IAsyncResult*, BeginInvoke, (app::Action_2_ByteEnum_ByteEnum_ * this_ptr, app::ByteEnum__Enum arg1, app::ByteEnum__Enum arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_ByteEnum_ByteEnum_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_2_ByteEnum_ByteEnum_

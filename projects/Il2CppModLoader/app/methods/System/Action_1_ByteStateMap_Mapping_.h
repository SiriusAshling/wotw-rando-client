#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Action_1_ByteStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_ByteStateMap_Mapping_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D253C0, void, Invoke, (app::Action_1_ByteStateMap_Mapping_ * this_ptr, app::ByteStateMap_Mapping obj))
    IL2CPP_REGISTER_METHOD(0x01D257B0, app::IAsyncResult*, BeginInvoke, (app::Action_1_ByteStateMap_Mapping_ * this_ptr, app::ByteStateMap_Mapping obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_ByteStateMap_Mapping_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_ByteStateMap_Mapping_

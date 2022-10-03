#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::DoWorkEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DoWorkEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::DoWorkEventHandler * this_ptr, app::Object* sender, app::DoWorkEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::DoWorkEventHandler * this_ptr, app::Object* sender, app::DoWorkEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DoWorkEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::ComponentModel::DoWorkEventHandler

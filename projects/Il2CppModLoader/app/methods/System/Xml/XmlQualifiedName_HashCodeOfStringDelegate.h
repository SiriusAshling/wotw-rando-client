#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XmlQualifiedName_HashCodeOfStringDelegate * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01700900, int32_t, Invoke, (app::XmlQualifiedName_HashCodeOfStringDelegate * this_ptr, app::String * s, int32_t s_len, int64_t additional_entropy))
    IL2CPP_REGISTER_METHOD(0x01700E80, app::IAsyncResult *, BeginInvoke, (app::XmlQualifiedName_HashCodeOfStringDelegate * this_ptr, app::String * s, int32_t s_len, int64_t additional_entropy, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::XmlQualifiedName_HashCodeOfStringDelegate * this_ptr, app::IAsyncResult * result))
}
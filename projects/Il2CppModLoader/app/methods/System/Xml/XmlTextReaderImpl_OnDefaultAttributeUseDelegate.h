#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::XmlTextReaderImpl_OnDefaultAttributeUseDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate * this_ptr, app::IDtdDefaultAttributeInfo* default_attribute, app::XmlTextReaderImpl* core_reader))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate * this_ptr, app::IDtdDefaultAttributeInfo* default_attribute, app::XmlTextReaderImpl* core_reader, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Xml::XmlTextReaderImpl_OnDefaultAttributeUseDelegate

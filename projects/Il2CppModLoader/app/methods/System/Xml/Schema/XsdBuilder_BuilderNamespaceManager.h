#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager {
    IL2CPP_REGISTER_METHOD(0x01C7CCF0, void, ctor, (app::XsdBuilder_BuilderNamespaceManager * this_ptr, app::XmlNamespaceManager * ns_mgr, app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x01C7CD00, app::String *, LookupNamespace, (app::XsdBuilder_BuilderNamespaceManager * this_ptr, app::String * prefix))
}
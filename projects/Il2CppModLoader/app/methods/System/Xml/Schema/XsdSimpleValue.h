#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XsdSimpleValue {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::XsdSimpleValue * this_ptr, app::XmlSchemaSimpleType * st, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlSchemaSimpleType *, get_XmlType, (app::XsdSimpleValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object *, get_TypedValue, (app::XsdSimpleValue * this_ptr))
}
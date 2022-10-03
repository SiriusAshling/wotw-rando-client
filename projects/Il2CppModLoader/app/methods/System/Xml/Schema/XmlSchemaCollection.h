#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlSchemaCollection {
    IL2CPP_REGISTER_METHOD(0x01CA1F70, void, ctor, (app::XmlSchemaCollection * this_ptr, app::XmlNameTable* nametable))
    IL2CPP_REGISTER_METHODINFO(0x047959E0, XmlSchemaCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016FBBA0, int32_t, get_Count, (app::XmlSchemaCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlNameTable*, get_NameTable, (app::XmlSchemaCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_XmlResolver, (app::XmlSchemaCollection * this_ptr, app::XmlResolver* value))
    IL2CPP_REGISTER_METHOD(0x01CA21F0, app::XmlSchema*, get_Item, (app::XmlSchemaCollection * this_ptr, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01CA22E0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::XmlSchemaCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA2450, app::XmlSchemaCollectionEnumerator*, GetEnumerator, (app::XmlSchemaCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA25C0, void, ICollection_CopyTo, (app::XmlSchemaCollection * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471F288, XmlSchemaCollection_System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ICollection_get_IsSynchronized, (app::XmlSchemaCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, ICollection_get_SyncRoot, (app::XmlSchemaCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBBA0, int32_t, ICollection_get_Count, (app::XmlSchemaCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA2750, app::SchemaInfo*, GetSchemaInfo, (app::XmlSchemaCollection * this_ptr, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01CA2840, app::SchemaNames*, GetSchemaNames, (app::XmlSchemaCollection * this_ptr, app::XmlNameTable* nt))
    IL2CPP_REGISTER_METHOD(0x01CA2A80, app::XmlSchema*, Add_1, (app::XmlSchemaCollection * this_ptr, app::String* ns, app::SchemaInfo* schema_info, app::XmlSchema* schema, bool compile))
    IL2CPP_REGISTER_METHOD(0x01CA2AB0, app::XmlSchema*, Add_2, (app::XmlSchemaCollection * this_ptr, app::String* ns, app::SchemaInfo* schema_info, app::XmlSchema* schema, bool compile, app::XmlResolver* resolver))
    IL2CPP_REGISTER_METHOD(0x01CA2D00, void, Add_3, (app::XmlSchemaCollection * this_ptr, app::String* ns, app::XmlSchemaCollectionNode* node))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::ValidationEventHandler*, get_EventHandler, (app::XmlSchemaCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_EventHandler, (app::XmlSchemaCollection * this_ptr, app::ValidationEventHandler* value))
} // namespace app::classes::System::Xml::Schema::XmlSchemaCollection

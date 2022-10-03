#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_EntityType__Enum {
        namespace {
            app::XmlTextReaderImpl_EntityType__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlTextReaderImpl_EntityType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlTextReaderImpl_EntityType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_EntityType__Enum__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "EntityType");
        }
        inline app::XmlTextReaderImpl_EntityType__Enum* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_EntityType__Enum>(get_class());
        }
    } // namespace XmlTextReaderImpl_EntityType__Enum
} // namespace app::classes::types

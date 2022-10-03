#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttributeValueCache_ItemType__Enum {
        namespace {
            app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class>(type_info, "System.Xml", "XmlWellFormedWriter+AttributeValueCache", "ItemType");
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum>(get_class());
        }
    } // namespace XmlWellFormedWriter_AttributeValueCache_ItemType__Enum
} // namespace app::classes::types

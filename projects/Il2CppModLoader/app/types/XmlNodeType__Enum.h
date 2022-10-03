#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNodeType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNodeType__Enum__Class** type_info;
        inline app::XmlNodeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeType__Enum__Class>(type_info, "System.Xml", "XmlNodeType");
        }
        inline app::XmlNodeType__Enum* create() {
            return il2cpp::create_object<app::XmlNodeType__Enum>(get_class());
        }
    } // namespace XmlNodeType__Enum
} // namespace app::classes::types

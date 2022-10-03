#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchema__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchema__Array__Class** type_info;
        inline app::XmlSchema__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchema__Array__Class>(type_info, "System.Xml.Schema", "XmlSchema[]");
        }
        inline app::XmlSchema__Array* create() {
            return il2cpp::create_object<app::XmlSchema__Array>(get_class());
        }
    } // namespace XmlSchema__Array
} // namespace app::classes::types

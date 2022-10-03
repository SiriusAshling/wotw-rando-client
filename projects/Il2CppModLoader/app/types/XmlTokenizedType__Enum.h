#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTokenizedType__Enum {
        namespace {
            app::XmlTokenizedType__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlTokenizedType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlTokenizedType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlTokenizedType__Enum__Class>(type_info, "System.Xml", "XmlTokenizedType");
        }
        inline app::XmlTokenizedType__Enum* create() {
            return il2cpp::create_object<app::XmlTokenizedType__Enum>(get_class());
        }
    } // namespace XmlTokenizedType__Enum
} // namespace app::classes::types

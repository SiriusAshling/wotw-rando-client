#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNodeList {
        namespace {
            app::XmlNodeList__Class* type_info_ref = nullptr;
        }
        app::XmlNodeList__Class** type_info = &type_info_ref;
        inline app::XmlNodeList__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeList__Class>(type_info, "System.Xml", "XmlNodeList");
        }
        inline app::XmlNodeList* create() {
            return il2cpp::create_object<app::XmlNodeList>(get_class());
        }
    } // namespace XmlNodeList
} // namespace app::classes::types

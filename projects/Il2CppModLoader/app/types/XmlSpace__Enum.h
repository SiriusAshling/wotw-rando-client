#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSpace__Enum {
        namespace {
            app::XmlSpace__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlSpace__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSpace__Enum__Class>(type_info, "System.Xml", "XmlSpace");
        }
        inline app::XmlSpace__Enum* create() {
            return il2cpp::create_object<app::XmlSpace__Enum>(get_class());
        }
    } // namespace XmlSpace__Enum
} // namespace app::classes::types
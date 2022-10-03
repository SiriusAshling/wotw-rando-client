#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSeverityType__Enum {
        namespace {
            app::XmlSeverityType__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlSeverityType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSeverityType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSeverityType__Enum__Class>(type_info, "System.Xml.Schema", "XmlSeverityType");
        }
        inline app::XmlSeverityType__Enum* create() {
            return il2cpp::create_object<app::XmlSeverityType__Enum>(get_class());
        }
    } // namespace XmlSeverityType__Enum
} // namespace app::classes::types

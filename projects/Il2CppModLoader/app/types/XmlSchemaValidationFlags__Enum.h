#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaValidationFlags__Enum {
        namespace {
            app::XmlSchemaValidationFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlSchemaValidationFlags__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSchemaValidationFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaValidationFlags__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaValidationFlags");
        }
        inline app::XmlSchemaValidationFlags__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaValidationFlags__Enum>(get_class());
        }
    } // namespace XmlSchemaValidationFlags__Enum
} // namespace app::classes::types
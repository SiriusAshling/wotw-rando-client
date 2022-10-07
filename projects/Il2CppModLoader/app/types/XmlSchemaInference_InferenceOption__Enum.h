#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInference_InferenceOption__Enum {
        namespace {
            app::XmlSchemaInference_InferenceOption__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlSchemaInference_InferenceOption__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSchemaInference_InferenceOption__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaInference_InferenceOption__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaInference", "InferenceOption");
        }
        inline app::XmlSchemaInference_InferenceOption__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaInference_InferenceOption__Enum>(get_class());
        }
    } // namespace XmlSchemaInference_InferenceOption__Enum
} // namespace app::classes::types
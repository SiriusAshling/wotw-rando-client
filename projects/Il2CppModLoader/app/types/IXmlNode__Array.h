#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlNode__Array {
        namespace {
            app::IXmlNode__Array__Class* type_info_ref = nullptr;
        }
        app::IXmlNode__Array__Class** type_info = &type_info_ref;
        inline app::IXmlNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IXmlNode__Array__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlNode[]");
        }
        inline app::IXmlNode__Array* create() {
            return il2cpp::create_object<app::IXmlNode__Array>(get_class());
        }
    } // namespace IXmlNode__Array
} // namespace app::classes::types

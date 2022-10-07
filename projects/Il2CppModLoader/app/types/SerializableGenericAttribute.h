#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializableGenericAttribute {
        namespace {
            app::SerializableGenericAttribute__Class* type_info_ref = nullptr;
        }
        app::SerializableGenericAttribute__Class** type_info = &type_info_ref;
        inline app::SerializableGenericAttribute__Class* get_class() {
            return il2cpp::get_class<app::SerializableGenericAttribute__Class>(type_info, "UnityEngine", "SerializableGenericAttribute");
        }
        inline app::SerializableGenericAttribute* create() {
            return il2cpp::create_object<app::SerializableGenericAttribute>(get_class());
        }
    } // namespace SerializableGenericAttribute
} // namespace app::classes::types
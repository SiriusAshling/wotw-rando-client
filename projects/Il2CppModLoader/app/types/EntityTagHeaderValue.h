#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityTagHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityTagHeaderValue__Class** type_info;
        inline app::EntityTagHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::EntityTagHeaderValue__Class>(type_info, "System.Net.Http.Headers", "EntityTagHeaderValue");
        }
        inline app::EntityTagHeaderValue* create() {
            return il2cpp::create_object<app::EntityTagHeaderValue>(get_class());
        }
        inline app::EntityTagHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityTagHeaderValue__Array>(get_class(), size);
        }
    } // namespace EntityTagHeaderValue
} // namespace app::classes::types

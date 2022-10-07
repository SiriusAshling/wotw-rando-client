#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyName__Class** type_info;
        inline app::PropertyName__Class* get_class() {
            return il2cpp::get_class<app::PropertyName__Class>(type_info, "UnityEngine", "PropertyName");
        }
        inline app::PropertyName* create() {
            return il2cpp::create_object<app::PropertyName>(get_class());
        }
        inline app::PropertyName__Boxed* box(app::PropertyName value) {
            return il2cpp::box_value<app::PropertyName__Boxed>(get_class(), value);
        }
    } // namespace PropertyName
} // namespace app::classes::types
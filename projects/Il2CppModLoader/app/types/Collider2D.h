#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Collider2D {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Collider2D__Class** type_info;
        inline app::Collider2D__Class* get_class() {
            return il2cpp::get_class<app::Collider2D__Class>(type_info, "UnityEngine", "Collider2D");
        }
        inline app::Collider2D* create() {
            return il2cpp::create_object<app::Collider2D>(get_class());
        }
        inline app::Collider2D__Array* create_array(int size) {
            return il2cpp::array_new<app::Collider2D__Array>(get_class(), size);
        }
    } // namespace Collider2D
} // namespace app::classes::types

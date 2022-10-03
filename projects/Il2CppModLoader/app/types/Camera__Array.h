#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Camera__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Camera__Array__Class** type_info;
        inline app::Camera__Array__Class* get_class() {
            return il2cpp::get_class<app::Camera__Array__Class>(type_info, "UnityEngine", "Camera[]");
        }
        inline app::Camera__Array* create() {
            return il2cpp::create_object<app::Camera__Array>(get_class());
        }
    } // namespace Camera__Array
} // namespace app::classes::types

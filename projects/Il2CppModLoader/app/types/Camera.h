#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Camera {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Camera__Class** type_info;
        inline app::Camera__Class* get_class() {
            return il2cpp::get_class<app::Camera__Class>(type_info, "UnityEngine", "Camera");
        }
        inline app::Camera* create() {
            return il2cpp::create_object<app::Camera>(get_class());
        }
        inline app::Camera__Array* create_array(int size) {
            return il2cpp::array_new<app::Camera__Array>(get_class(), size);
        }
    } // namespace Camera
} // namespace app::classes::types

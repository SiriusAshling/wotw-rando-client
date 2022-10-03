#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicCameraTargetting {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicCameraTargetting__Class** type_info;
        inline app::DynamicCameraTargetting__Class* get_class() {
            return il2cpp::get_class<app::DynamicCameraTargetting__Class>(type_info, "Moon", "DynamicCameraTargetting");
        }
        inline app::DynamicCameraTargetting* create() {
            return il2cpp::create_object<app::DynamicCameraTargetting>(get_class());
        }
    } // namespace DynamicCameraTargetting
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Exclusion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Blend2Camera_Exclusion__Class** type_info;
        inline app::CameraFilterPack_Blend2Camera_Exclusion__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Exclusion__Class>(type_info, "", "CameraFilterPack_Blend2Camera_Exclusion");
        }
        inline app::CameraFilterPack_Blend2Camera_Exclusion* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Exclusion>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Exclusion
} // namespace app::classes::types
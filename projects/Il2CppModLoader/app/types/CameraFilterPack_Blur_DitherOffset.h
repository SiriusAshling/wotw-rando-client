#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_DitherOffset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Blur_DitherOffset__Class** type_info;
        inline app::CameraFilterPack_Blur_DitherOffset__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_DitherOffset__Class>(type_info, "", "CameraFilterPack_Blur_DitherOffset");
        }
        inline app::CameraFilterPack_Blur_DitherOffset* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_DitherOffset>(get_class());
        }
    } // namespace CameraFilterPack_Blur_DitherOffset
} // namespace app::classes::types

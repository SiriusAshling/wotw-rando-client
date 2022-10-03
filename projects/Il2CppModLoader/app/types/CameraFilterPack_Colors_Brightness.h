#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_Brightness {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Colors_Brightness__Class** type_info;
        inline app::CameraFilterPack_Colors_Brightness__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_Brightness__Class>(type_info, "", "CameraFilterPack_Colors_Brightness");
        }
        inline app::CameraFilterPack_Colors_Brightness* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_Brightness>(get_class());
        }
    } // namespace CameraFilterPack_Colors_Brightness
} // namespace app::classes::types

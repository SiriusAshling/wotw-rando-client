#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Light_Rainbow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Light_Rainbow__Class** type_info;
        inline app::CameraFilterPack_Light_Rainbow__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Light_Rainbow__Class>(type_info, "", "CameraFilterPack_Light_Rainbow");
        }
        inline app::CameraFilterPack_Light_Rainbow* create() {
            return il2cpp::create_object<app::CameraFilterPack_Light_Rainbow>(get_class());
        }
    } // namespace CameraFilterPack_Light_Rainbow
} // namespace app::classes::types
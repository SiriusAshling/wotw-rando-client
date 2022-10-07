#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Film_Grain {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Film_Grain__Class** type_info;
        inline app::CameraFilterPack_Film_Grain__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Film_Grain__Class>(type_info, "", "CameraFilterPack_Film_Grain");
        }
        inline app::CameraFilterPack_Film_Grain* create() {
            return il2cpp::create_object<app::CameraFilterPack_Film_Grain>(get_class());
        }
    } // namespace CameraFilterPack_Film_Grain
} // namespace app::classes::types
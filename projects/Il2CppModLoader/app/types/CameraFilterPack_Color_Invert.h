#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_Invert {
        namespace {
            app::CameraFilterPack_Color_Invert__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Color_Invert__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Color_Invert__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_Invert__Class>(type_info, "", "CameraFilterPack_Color_Invert");
        }
        inline app::CameraFilterPack_Color_Invert* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_Invert>(get_class());
        }
    } // namespace CameraFilterPack_Color_Invert
} // namespace app::classes::types
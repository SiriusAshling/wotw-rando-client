#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Twist {
        namespace {
            app::CameraFilterPack_Distortion_Twist__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Distortion_Twist__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Distortion_Twist__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Twist__Class>(type_info, "", "CameraFilterPack_Distortion_Twist");
        }
        inline app::CameraFilterPack_Distortion_Twist* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Twist>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Twist
} // namespace app::classes::types

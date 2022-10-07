#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Gradients_NeonGradient {
        namespace {
            app::CameraFilterPack_Gradients_NeonGradient__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Gradients_NeonGradient__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Gradients_NeonGradient__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Gradients_NeonGradient__Class>(type_info, "", "CameraFilterPack_Gradients_NeonGradient");
        }
        inline app::CameraFilterPack_Gradients_NeonGradient* create() {
            return il2cpp::create_object<app::CameraFilterPack_Gradients_NeonGradient>(get_class());
        }
    } // namespace CameraFilterPack_Gradients_NeonGradient
} // namespace app::classes::types
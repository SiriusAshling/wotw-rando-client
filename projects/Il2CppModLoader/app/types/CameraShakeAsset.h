#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraShakeAsset {
        namespace {
            app::CameraShakeAsset__Class* type_info_ref = nullptr;
        }
        app::CameraShakeAsset__Class** type_info = &type_info_ref;
        inline app::CameraShakeAsset__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeAsset__Class>(type_info, "", "CameraShakeAsset");
        }
        inline app::CameraShakeAsset* create() {
            return il2cpp::create_object<app::CameraShakeAsset>(get_class());
        }
    } // namespace CameraShakeAsset
} // namespace app::classes::types
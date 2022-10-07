#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyCameraSettingsDistanceBasedAnimator {
        namespace {
            app::LegacyCameraSettingsDistanceBasedAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyCameraSettingsDistanceBasedAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyCameraSettingsDistanceBasedAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCameraSettingsDistanceBasedAnimator__Class>(type_info, "", "LegacyCameraSettingsDistanceBasedAnimator");
        }
        inline app::LegacyCameraSettingsDistanceBasedAnimator* create() {
            return il2cpp::create_object<app::LegacyCameraSettingsDistanceBasedAnimator>(get_class());
        }
    } // namespace LegacyCameraSettingsDistanceBasedAnimator
} // namespace app::classes::types
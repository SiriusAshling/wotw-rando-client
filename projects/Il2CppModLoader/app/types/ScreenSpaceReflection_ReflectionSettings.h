#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_ReflectionSettings {
        namespace {
            app::ScreenSpaceReflection_ReflectionSettings__Class* type_info_ref = nullptr;
        }
        app::ScreenSpaceReflection_ReflectionSettings__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceReflection_ReflectionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_ReflectionSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection", "ReflectionSettings");
        }
        inline app::ScreenSpaceReflection_ReflectionSettings* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_ReflectionSettings>(get_class());
        }
        inline app::ScreenSpaceReflection_ReflectionSettings__Boxed* box(app::ScreenSpaceReflection_ReflectionSettings value) {
            return il2cpp::box_value<app::ScreenSpaceReflection_ReflectionSettings__Boxed>(get_class(), value);
        }
    } // namespace ScreenSpaceReflection_ReflectionSettings
} // namespace app::classes::types
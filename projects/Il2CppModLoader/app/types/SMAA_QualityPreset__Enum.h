#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SMAA_QualityPreset__Enum {
        namespace {
            app::SMAA_QualityPreset__Enum__Class* type_info_ref = nullptr;
        }
        app::SMAA_QualityPreset__Enum__Class** type_info = &type_info_ref;
        inline app::SMAA_QualityPreset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_QualityPreset__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "QualityPreset");
        }
        inline app::SMAA_QualityPreset__Enum* create() {
            return il2cpp::create_object<app::SMAA_QualityPreset__Enum>(get_class());
        }
    } // namespace SMAA_QualityPreset__Enum
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SMAA_ExperimentalGroup {
        namespace {
            app::SMAA_ExperimentalGroup__Class* type_info_ref = nullptr;
        }
        app::SMAA_ExperimentalGroup__Class** type_info = &type_info_ref;
        inline app::SMAA_ExperimentalGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_ExperimentalGroup__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "ExperimentalGroup");
        }
        inline app::SMAA_ExperimentalGroup* create() {
            return il2cpp::create_object<app::SMAA_ExperimentalGroup>(get_class());
        }
    } // namespace SMAA_ExperimentalGroup
} // namespace app::classes::types
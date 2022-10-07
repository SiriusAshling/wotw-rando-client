#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReduceSceneUnloadUtilityProfilingSetting {
        namespace {
            app::ReduceSceneUnloadUtilityProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::ReduceSceneUnloadUtilityProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ReduceSceneUnloadUtilityProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ReduceSceneUnloadUtilityProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ReduceSceneUnloadUtilityProfilingSetting");
        }
        inline app::ReduceSceneUnloadUtilityProfilingSetting* create() {
            return il2cpp::create_object<app::ReduceSceneUnloadUtilityProfilingSetting>(get_class());
        }
    } // namespace ReduceSceneUnloadUtilityProfilingSetting
} // namespace app::classes::types
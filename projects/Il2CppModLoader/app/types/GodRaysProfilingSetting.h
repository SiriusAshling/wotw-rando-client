#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GodRaysProfilingSetting {
        namespace {
            app::GodRaysProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::GodRaysProfilingSetting__Class** type_info = &type_info_ref;
        inline app::GodRaysProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GodRaysProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "GodRaysProfilingSetting");
        }
        inline app::GodRaysProfilingSetting* create() {
            return il2cpp::create_object<app::GodRaysProfilingSetting>(get_class());
        }
    } // namespace GodRaysProfilingSetting
} // namespace app::classes::types

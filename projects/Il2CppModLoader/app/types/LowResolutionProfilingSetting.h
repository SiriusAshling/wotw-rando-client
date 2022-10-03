#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LowResolutionProfilingSetting {
        namespace {
            app::LowResolutionProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::LowResolutionProfilingSetting__Class** type_info = &type_info_ref;
        inline app::LowResolutionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::LowResolutionProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "LowResolutionProfilingSetting");
        }
        inline app::LowResolutionProfilingSetting* create() {
            return il2cpp::create_object<app::LowResolutionProfilingSetting>(get_class());
        }
    } // namespace LowResolutionProfilingSetting
} // namespace app::classes::types

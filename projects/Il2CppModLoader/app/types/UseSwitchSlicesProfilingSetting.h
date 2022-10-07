#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UseSwitchSlicesProfilingSetting {
        namespace {
            app::UseSwitchSlicesProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::UseSwitchSlicesProfilingSetting__Class** type_info = &type_info_ref;
        inline app::UseSwitchSlicesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::UseSwitchSlicesProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "UseSwitchSlicesProfilingSetting");
        }
        inline app::UseSwitchSlicesProfilingSetting* create() {
            return il2cpp::create_object<app::UseSwitchSlicesProfilingSetting>(get_class());
        }
    } // namespace UseSwitchSlicesProfilingSetting
} // namespace app::classes::types
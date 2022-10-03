#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DarkeningProfilingSetting {
        namespace {
            app::DarkeningProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::DarkeningProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DarkeningProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DarkeningProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DarkeningProfilingSetting");
        }
        inline app::DarkeningProfilingSetting* create() {
            return il2cpp::create_object<app::DarkeningProfilingSetting>(get_class());
        }
    } // namespace DarkeningProfilingSetting
} // namespace app::classes::types

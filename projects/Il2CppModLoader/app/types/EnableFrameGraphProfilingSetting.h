#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnableFrameGraphProfilingSetting {
        namespace {
            app::EnableFrameGraphProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::EnableFrameGraphProfilingSetting__Class** type_info = &type_info_ref;
        inline app::EnableFrameGraphProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EnableFrameGraphProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "EnableFrameGraphProfilingSetting");
        }
        inline app::EnableFrameGraphProfilingSetting* create() {
            return il2cpp::create_object<app::EnableFrameGraphProfilingSetting>(get_class());
        }
    } // namespace EnableFrameGraphProfilingSetting
} // namespace app::classes::types
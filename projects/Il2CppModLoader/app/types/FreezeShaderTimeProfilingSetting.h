#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FreezeShaderTimeProfilingSetting {
        namespace {
            app::FreezeShaderTimeProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::FreezeShaderTimeProfilingSetting__Class** type_info = &type_info_ref;
        inline app::FreezeShaderTimeProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::FreezeShaderTimeProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "FreezeShaderTimeProfilingSetting");
        }
        inline app::FreezeShaderTimeProfilingSetting* create() {
            return il2cpp::create_object<app::FreezeShaderTimeProfilingSetting>(get_class());
        }
    } // namespace FreezeShaderTimeProfilingSetting
} // namespace app::classes::types
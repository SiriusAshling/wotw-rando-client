#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoolingProfilingSetting {
        namespace {
            app::PoolingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::PoolingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::PoolingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PoolingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "PoolingProfilingSetting");
        }
        inline app::PoolingProfilingSetting* create() {
            return il2cpp::create_object<app::PoolingProfilingSetting>(get_class());
        }
    } // namespace PoolingProfilingSetting
} // namespace app::classes::types
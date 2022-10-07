#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageDataPoint {
        namespace {
            app::DamageDataPoint__Class* type_info_ref = nullptr;
        }
        app::DamageDataPoint__Class** type_info = &type_info_ref;
        inline app::DamageDataPoint__Class* get_class() {
            return il2cpp::get_class<app::DamageDataPoint__Class>(type_info, "Moon.Telemetry", "DamageDataPoint");
        }
        inline app::DamageDataPoint* create() {
            return il2cpp::create_object<app::DamageDataPoint>(get_class());
        }
    } // namespace DamageDataPoint
} // namespace app::classes::types
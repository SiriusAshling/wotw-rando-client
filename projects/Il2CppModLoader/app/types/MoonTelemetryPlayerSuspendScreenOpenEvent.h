#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSuspendScreenOpenEvent {
        namespace {
            app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class* type_info_ref = nullptr;
        }
        app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class>(type_info, "", "MoonTelemetryPlayerSuspendScreenOpenEvent");
        }
        inline app::MoonTelemetryPlayerSuspendScreenOpenEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSuspendScreenOpenEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSuspendScreenOpenEvent
} // namespace app::classes::types

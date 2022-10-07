#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionPauseEvent {
        namespace {
            app::MoonTelemetryPlayerSessionPauseEvent__Class* type_info_ref = nullptr;
        }
        app::MoonTelemetryPlayerSessionPauseEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryPlayerSessionPauseEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionPauseEvent__Class>(type_info, "", "MoonTelemetryPlayerSessionPauseEvent");
        }
        inline app::MoonTelemetryPlayerSessionPauseEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionPauseEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionPauseEvent
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySceneEvent_EventSceneState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class** type_info;
        inline app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class>(type_info, "", "MoonTelemetrySceneEvent", "EventSceneState");
        }
        inline app::MoonTelemetrySceneEvent_EventSceneState__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetrySceneEvent_EventSceneState__Enum>(get_class());
        }
    } // namespace MoonTelemetrySceneEvent_EventSceneState__Enum
} // namespace app::classes::types

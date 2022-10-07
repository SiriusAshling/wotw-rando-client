#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyOnTimelineStopEvent {
        namespace {
            app::DestroyOnTimelineStopEvent__Class* type_info_ref = nullptr;
        }
        app::DestroyOnTimelineStopEvent__Class** type_info = &type_info_ref;
        inline app::DestroyOnTimelineStopEvent__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnTimelineStopEvent__Class>(type_info, "", "DestroyOnTimelineStopEvent");
        }
        inline app::DestroyOnTimelineStopEvent* create() {
            return il2cpp::create_object<app::DestroyOnTimelineStopEvent>(get_class());
        }
    } // namespace DestroyOnTimelineStopEvent
} // namespace app::classes::types
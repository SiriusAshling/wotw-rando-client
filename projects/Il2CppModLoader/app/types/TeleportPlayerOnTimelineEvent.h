#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TeleportPlayerOnTimelineEvent {
        namespace {
            app::TeleportPlayerOnTimelineEvent__Class* type_info_ref = nullptr;
        }
        app::TeleportPlayerOnTimelineEvent__Class** type_info = &type_info_ref;
        inline app::TeleportPlayerOnTimelineEvent__Class* get_class() {
            return il2cpp::get_class<app::TeleportPlayerOnTimelineEvent__Class>(type_info, "", "TeleportPlayerOnTimelineEvent");
        }
        inline app::TeleportPlayerOnTimelineEvent* create() {
            return il2cpp::create_object<app::TeleportPlayerOnTimelineEvent>(get_class());
        }
    } // namespace TeleportPlayerOnTimelineEvent
} // namespace app::classes::types
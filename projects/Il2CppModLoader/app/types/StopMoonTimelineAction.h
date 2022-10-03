#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StopMoonTimelineAction {
        namespace {
            app::StopMoonTimelineAction__Class* type_info_ref = nullptr;
        }
        app::StopMoonTimelineAction__Class** type_info = &type_info_ref;
        inline app::StopMoonTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::StopMoonTimelineAction__Class>(type_info, "", "StopMoonTimelineAction");
        }
        inline app::StopMoonTimelineAction* create() {
            return il2cpp::create_object<app::StopMoonTimelineAction>(get_class());
        }
    } // namespace StopMoonTimelineAction
} // namespace app::classes::types

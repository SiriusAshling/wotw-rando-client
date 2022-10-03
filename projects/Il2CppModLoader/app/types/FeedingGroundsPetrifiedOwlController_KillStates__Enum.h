#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsPetrifiedOwlController_KillStates__Enum {
        namespace {
            app::FeedingGroundsPetrifiedOwlController_KillStates__Enum__Class* type_info_ref = nullptr;
        }
        app::FeedingGroundsPetrifiedOwlController_KillStates__Enum__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsPetrifiedOwlController_KillStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FeedingGroundsPetrifiedOwlController_KillStates__Enum__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsPetrifiedOwlController", "KillStates");
        }
        inline app::FeedingGroundsPetrifiedOwlController_KillStates__Enum* create() {
            return il2cpp::create_object<app::FeedingGroundsPetrifiedOwlController_KillStates__Enum>(get_class());
        }
    } // namespace FeedingGroundsPetrifiedOwlController_KillStates__Enum
} // namespace app::classes::types

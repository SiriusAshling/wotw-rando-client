#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeftTriggerRightTriggerCycle {
        namespace {
            app::LeftTriggerRightTriggerCycle__Class* type_info_ref = nullptr;
        }
        app::LeftTriggerRightTriggerCycle__Class** type_info = &type_info_ref;
        inline app::LeftTriggerRightTriggerCycle__Class* get_class() {
            return il2cpp::get_class<app::LeftTriggerRightTriggerCycle__Class>(type_info, "", "LeftTriggerRightTriggerCycle");
        }
        inline app::LeftTriggerRightTriggerCycle* create() {
            return il2cpp::create_object<app::LeftTriggerRightTriggerCycle>(get_class());
        }
    } // namespace LeftTriggerRightTriggerCycle
} // namespace app::classes::types
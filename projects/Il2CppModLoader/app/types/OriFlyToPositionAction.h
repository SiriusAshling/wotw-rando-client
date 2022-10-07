#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriFlyToPositionAction {
        namespace {
            app::OriFlyToPositionAction__Class* type_info_ref = nullptr;
        }
        app::OriFlyToPositionAction__Class** type_info = &type_info_ref;
        inline app::OriFlyToPositionAction__Class* get_class() {
            return il2cpp::get_class<app::OriFlyToPositionAction__Class>(type_info, "", "OriFlyToPositionAction");
        }
        inline app::OriFlyToPositionAction* create() {
            return il2cpp::create_object<app::OriFlyToPositionAction>(get_class());
        }
    } // namespace OriFlyToPositionAction
} // namespace app::classes::types
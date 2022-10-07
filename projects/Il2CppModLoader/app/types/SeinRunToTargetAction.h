#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinRunToTargetAction {
        namespace {
            app::SeinRunToTargetAction__Class* type_info_ref = nullptr;
        }
        app::SeinRunToTargetAction__Class** type_info = &type_info_ref;
        inline app::SeinRunToTargetAction__Class* get_class() {
            return il2cpp::get_class<app::SeinRunToTargetAction__Class>(type_info, "", "SeinRunToTargetAction");
        }
        inline app::SeinRunToTargetAction* create() {
            return il2cpp::create_object<app::SeinRunToTargetAction>(get_class());
        }
    } // namespace SeinRunToTargetAction
} // namespace app::classes::types
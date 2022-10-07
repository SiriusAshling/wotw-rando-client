#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayAnimatorAction {
        namespace {
            app::PlayAnimatorAction__Class* type_info_ref = nullptr;
        }
        app::PlayAnimatorAction__Class** type_info = &type_info_ref;
        inline app::PlayAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimatorAction__Class>(type_info, "", "PlayAnimatorAction");
        }
        inline app::PlayAnimatorAction* create() {
            return il2cpp::create_object<app::PlayAnimatorAction>(get_class());
        }
    } // namespace PlayAnimatorAction
} // namespace app::classes::types
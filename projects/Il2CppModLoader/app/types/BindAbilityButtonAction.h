#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BindAbilityButtonAction {
        namespace {
            app::BindAbilityButtonAction__Class* type_info_ref = nullptr;
        }
        app::BindAbilityButtonAction__Class** type_info = &type_info_ref;
        inline app::BindAbilityButtonAction__Class* get_class() {
            return il2cpp::get_class<app::BindAbilityButtonAction__Class>(type_info, "", "BindAbilityButtonAction");
        }
        inline app::BindAbilityButtonAction* create() {
            return il2cpp::create_object<app::BindAbilityButtonAction>(get_class());
        }
    } // namespace BindAbilityButtonAction
} // namespace app::classes::types

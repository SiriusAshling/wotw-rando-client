#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradeTowerAction {
        namespace {
            app::UpgradeTowerAction__Class* type_info_ref = nullptr;
        }
        app::UpgradeTowerAction__Class** type_info = &type_info_ref;
        inline app::UpgradeTowerAction__Class* get_class() {
            return il2cpp::get_class<app::UpgradeTowerAction__Class>(type_info, "", "UpgradeTowerAction");
        }
        inline app::UpgradeTowerAction* create() {
            return il2cpp::create_object<app::UpgradeTowerAction>(get_class());
        }
    } // namespace UpgradeTowerAction
} // namespace app::classes::types
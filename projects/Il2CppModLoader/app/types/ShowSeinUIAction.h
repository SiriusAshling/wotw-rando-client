#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowSeinUIAction {
        namespace {
            app::ShowSeinUIAction__Class* type_info_ref = nullptr;
        }
        app::ShowSeinUIAction__Class** type_info = &type_info_ref;
        inline app::ShowSeinUIAction__Class* get_class() {
            return il2cpp::get_class<app::ShowSeinUIAction__Class>(type_info, "", "ShowSeinUIAction");
        }
        inline app::ShowSeinUIAction* create() {
            return il2cpp::create_object<app::ShowSeinUIAction>(get_class());
        }
    } // namespace ShowSeinUIAction
} // namespace app::classes::types

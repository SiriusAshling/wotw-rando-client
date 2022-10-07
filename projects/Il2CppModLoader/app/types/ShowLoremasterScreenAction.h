#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowLoremasterScreenAction {
        namespace {
            app::ShowLoremasterScreenAction__Class* type_info_ref = nullptr;
        }
        app::ShowLoremasterScreenAction__Class** type_info = &type_info_ref;
        inline app::ShowLoremasterScreenAction__Class* get_class() {
            return il2cpp::get_class<app::ShowLoremasterScreenAction__Class>(type_info, "", "ShowLoremasterScreenAction");
        }
        inline app::ShowLoremasterScreenAction* create() {
            return il2cpp::create_object<app::ShowLoremasterScreenAction>(get_class());
        }
    } // namespace ShowLoremasterScreenAction
} // namespace app::classes::types
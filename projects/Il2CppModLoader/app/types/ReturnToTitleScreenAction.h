#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReturnToTitleScreenAction {
        namespace {
            app::ReturnToTitleScreenAction__Class* type_info_ref = nullptr;
        }
        app::ReturnToTitleScreenAction__Class** type_info = &type_info_ref;
        inline app::ReturnToTitleScreenAction__Class* get_class() {
            return il2cpp::get_class<app::ReturnToTitleScreenAction__Class>(type_info, "", "ReturnToTitleScreenAction");
        }
        inline app::ReturnToTitleScreenAction* create() {
            return il2cpp::create_object<app::ReturnToTitleScreenAction>(get_class());
        }
    } // namespace ReturnToTitleScreenAction
} // namespace app::classes::types
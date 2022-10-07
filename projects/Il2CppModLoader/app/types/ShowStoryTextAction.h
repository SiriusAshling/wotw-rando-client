#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowStoryTextAction {
        namespace {
            app::ShowStoryTextAction__Class* type_info_ref = nullptr;
        }
        app::ShowStoryTextAction__Class** type_info = &type_info_ref;
        inline app::ShowStoryTextAction__Class* get_class() {
            return il2cpp::get_class<app::ShowStoryTextAction__Class>(type_info, "", "ShowStoryTextAction");
        }
        inline app::ShowStoryTextAction* create() {
            return il2cpp::create_object<app::ShowStoryTextAction>(get_class());
        }
    } // namespace ShowStoryTextAction
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowWispTextAction {
        namespace {
            app::ShowWispTextAction__Class* type_info_ref = nullptr;
        }
        app::ShowWispTextAction__Class** type_info = &type_info_ref;
        inline app::ShowWispTextAction__Class* get_class() {
            return il2cpp::get_class<app::ShowWispTextAction__Class>(type_info, "", "ShowWispTextAction");
        }
        inline app::ShowWispTextAction* create() {
            return il2cpp::create_object<app::ShowWispTextAction>(get_class());
        }
    } // namespace ShowWispTextAction
} // namespace app::classes::types
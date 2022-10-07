#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistAction {
        namespace {
            app::MistAction__Class* type_info_ref = nullptr;
        }
        app::MistAction__Class** type_info = &type_info_ref;
        inline app::MistAction__Class* get_class() {
            return il2cpp::get_class<app::MistAction__Class>(type_info, "", "MistAction");
        }
        inline app::MistAction* create() {
            return il2cpp::create_object<app::MistAction>(get_class());
        }
    } // namespace MistAction
} // namespace app::classes::types
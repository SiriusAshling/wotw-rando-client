#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetParentAction {
        namespace {
            app::SetParentAction__Class* type_info_ref = nullptr;
        }
        app::SetParentAction__Class** type_info = &type_info_ref;
        inline app::SetParentAction__Class* get_class() {
            return il2cpp::get_class<app::SetParentAction__Class>(type_info, "", "SetParentAction");
        }
        inline app::SetParentAction* create() {
            return il2cpp::create_object<app::SetParentAction>(get_class());
        }
    } // namespace SetParentAction
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RestoreHealthAction {
        namespace {
            app::RestoreHealthAction__Class* type_info_ref = nullptr;
        }
        app::RestoreHealthAction__Class** type_info = &type_info_ref;
        inline app::RestoreHealthAction__Class* get_class() {
            return il2cpp::get_class<app::RestoreHealthAction__Class>(type_info, "", "RestoreHealthAction");
        }
        inline app::RestoreHealthAction* create() {
            return il2cpp::create_object<app::RestoreHealthAction>(get_class());
        }
    } // namespace RestoreHealthAction
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeashHookLogic {
        namespace {
            app::LeashHookLogic__Class* type_info_ref = nullptr;
        }
        app::LeashHookLogic__Class** type_info = &type_info_ref;
        inline app::LeashHookLogic__Class* get_class() {
            return il2cpp::get_class<app::LeashHookLogic__Class>(type_info, "", "LeashHookLogic");
        }
        inline app::LeashHookLogic* create() {
            return il2cpp::create_object<app::LeashHookLogic>(get_class());
        }
    } // namespace LeashHookLogic
} // namespace app::classes::types
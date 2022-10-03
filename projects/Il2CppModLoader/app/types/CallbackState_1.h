#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallbackState_1 {
        namespace {
            app::CallbackState_1__Class* type_info_ref = nullptr;
        }
        app::CallbackState_1__Class** type_info = &type_info_ref;
        inline app::CallbackState_1__Class* get_class() {
            return il2cpp::get_class<app::CallbackState_1__Class>(type_info, "fsm", "CallbackState");
        }
        inline app::CallbackState_1* create() {
            return il2cpp::create_object<app::CallbackState_1>(get_class());
        }
    } // namespace CallbackState_1
} // namespace app::classes::types

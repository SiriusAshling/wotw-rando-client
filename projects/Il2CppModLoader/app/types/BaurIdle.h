#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaurIdle {
        namespace {
            app::BaurIdle__Class* type_info_ref = nullptr;
        }
        app::BaurIdle__Class** type_info = &type_info_ref;
        inline app::BaurIdle__Class* get_class() {
            return il2cpp::get_class<app::BaurIdle__Class>(type_info, "", "BaurIdle");
        }
        inline app::BaurIdle* create() {
            return il2cpp::create_object<app::BaurIdle>(get_class());
        }
    } // namespace BaurIdle
} // namespace app::classes::types

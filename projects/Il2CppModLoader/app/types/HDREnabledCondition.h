#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HDREnabledCondition {
        namespace {
            app::HDREnabledCondition__Class* type_info_ref = nullptr;
        }
        app::HDREnabledCondition__Class** type_info = &type_info_ref;
        inline app::HDREnabledCondition__Class* get_class() {
            return il2cpp::get_class<app::HDREnabledCondition__Class>(type_info, "", "HDREnabledCondition");
        }
        inline app::HDREnabledCondition* create() {
            return il2cpp::create_object<app::HDREnabledCondition>(get_class());
        }
    } // namespace HDREnabledCondition
} // namespace app::classes::types

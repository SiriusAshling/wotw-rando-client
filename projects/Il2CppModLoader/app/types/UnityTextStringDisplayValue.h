#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityTextStringDisplayValue {
        namespace {
            app::UnityTextStringDisplayValue__Class* type_info_ref = nullptr;
        }
        app::UnityTextStringDisplayValue__Class** type_info = &type_info_ref;
        inline app::UnityTextStringDisplayValue__Class* get_class() {
            return il2cpp::get_class<app::UnityTextStringDisplayValue__Class>(type_info, "", "UnityTextStringDisplayValue");
        }
        inline app::UnityTextStringDisplayValue* create() {
            return il2cpp::create_object<app::UnityTextStringDisplayValue>(get_class());
        }
    } // namespace UnityTextStringDisplayValue
} // namespace app::classes::types

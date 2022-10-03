#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dropdown_OptionData__Array {
        namespace {
            app::Dropdown_OptionData__Array__Class* type_info_ref = nullptr;
        }
        app::Dropdown_OptionData__Array__Class** type_info = &type_info_ref;
        inline app::Dropdown_OptionData__Array__Class* get_class() {
            return il2cpp::get_class<app::Dropdown_OptionData__Array__Class>(type_info, "UnityEngine.UI", "Dropdown+OptionData[]");
        }
        inline app::Dropdown_OptionData__Array* create() {
            return il2cpp::create_object<app::Dropdown_OptionData__Array>(get_class());
        }
    } // namespace Dropdown_OptionData__Array
} // namespace app::classes::types

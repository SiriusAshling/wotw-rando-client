#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputField_EditState__Enum {
        namespace {
            app::InputField_EditState__Enum__Class* type_info_ref = nullptr;
        }
        app::InputField_EditState__Enum__Class** type_info = &type_info_ref;
        inline app::InputField_EditState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_EditState__Enum__Class>(type_info, "UnityEngine.UI", "InputField", "EditState");
        }
        inline app::InputField_EditState__Enum* create() {
            return il2cpp::create_object<app::InputField_EditState__Enum>(get_class());
        }
    } // namespace InputField_EditState__Enum
} // namespace app::classes::types

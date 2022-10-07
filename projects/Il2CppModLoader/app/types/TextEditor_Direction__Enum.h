#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextEditor_Direction__Enum {
        namespace {
            app::TextEditor_Direction__Enum__Class* type_info_ref = nullptr;
        }
        app::TextEditor_Direction__Enum__Class** type_info = &type_info_ref;
        inline app::TextEditor_Direction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TextEditor_Direction__Enum__Class>(type_info, "UnityEngine", "TextEditor", "Direction");
        }
        inline app::TextEditor_Direction__Enum* create() {
            return il2cpp::create_object<app::TextEditor_Direction__Enum>(get_class());
        }
    } // namespace TextEditor_Direction__Enum
} // namespace app::classes::types
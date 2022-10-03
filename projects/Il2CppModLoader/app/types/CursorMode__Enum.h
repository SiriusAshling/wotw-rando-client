#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CursorMode__Enum {
        namespace {
            app::CursorMode__Enum__Class* type_info_ref = nullptr;
        }
        app::CursorMode__Enum__Class** type_info = &type_info_ref;
        inline app::CursorMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CursorMode__Enum__Class>(type_info, "UnityEngine", "CursorMode");
        }
        inline app::CursorMode__Enum* create() {
            return il2cpp::create_object<app::CursorMode__Enum>(get_class());
        }
    } // namespace CursorMode__Enum
} // namespace app::classes::types

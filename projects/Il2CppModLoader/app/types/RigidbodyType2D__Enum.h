#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyType2D__Enum {
        namespace {
            app::RigidbodyType2D__Enum__Class* type_info_ref = nullptr;
        }
        app::RigidbodyType2D__Enum__Class** type_info = &type_info_ref;
        inline app::RigidbodyType2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyType2D__Enum__Class>(type_info, "UnityEngine", "RigidbodyType2D");
        }
        inline app::RigidbodyType2D__Enum* create() {
            return il2cpp::create_object<app::RigidbodyType2D__Enum>(get_class());
        }
    } // namespace RigidbodyType2D__Enum
} // namespace app::classes::types
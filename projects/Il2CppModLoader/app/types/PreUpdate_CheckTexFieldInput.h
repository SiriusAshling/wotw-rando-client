#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_CheckTexFieldInput {
        namespace {
            app::PreUpdate_CheckTexFieldInput__Class* type_info_ref = nullptr;
        }
        app::PreUpdate_CheckTexFieldInput__Class** type_info = &type_info_ref;
        inline app::PreUpdate_CheckTexFieldInput__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_CheckTexFieldInput__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "CheckTexFieldInput");
        }
        inline app::PreUpdate_CheckTexFieldInput* create() {
            return il2cpp::create_object<app::PreUpdate_CheckTexFieldInput>(get_class());
        }
        inline app::PreUpdate_CheckTexFieldInput__Boxed* box(app::PreUpdate_CheckTexFieldInput value) {
            return il2cpp::box_value<app::PreUpdate_CheckTexFieldInput__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_CheckTexFieldInput
} // namespace app::classes::types

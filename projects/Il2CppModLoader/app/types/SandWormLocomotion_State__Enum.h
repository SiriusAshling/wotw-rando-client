#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormLocomotion_State__Enum {
        namespace {
            app::SandWormLocomotion_State__Enum__Class* type_info_ref = nullptr;
        }
        app::SandWormLocomotion_State__Enum__Class** type_info = &type_info_ref;
        inline app::SandWormLocomotion_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormLocomotion_State__Enum__Class>(type_info, "", "SandWormLocomotion", "State");
        }
        inline app::SandWormLocomotion_State__Enum* create() {
            return il2cpp::create_object<app::SandWormLocomotion_State__Enum>(get_class());
        }
    } // namespace SandWormLocomotion_State__Enum
} // namespace app::classes::types
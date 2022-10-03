#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplayCamera_MotionType__Enum {
        namespace {
            app::GameplayCamera_MotionType__Enum__Class* type_info_ref = nullptr;
        }
        app::GameplayCamera_MotionType__Enum__Class** type_info = &type_info_ref;
        inline app::GameplayCamera_MotionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameplayCamera_MotionType__Enum__Class>(type_info, "", "GameplayCamera", "MotionType");
        }
        inline app::GameplayCamera_MotionType__Enum* create() {
            return il2cpp::create_object<app::GameplayCamera_MotionType__Enum>(get_class());
        }
    } // namespace GameplayCamera_MotionType__Enum
} // namespace app::classes::types

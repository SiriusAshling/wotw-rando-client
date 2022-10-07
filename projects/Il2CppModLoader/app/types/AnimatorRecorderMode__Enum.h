#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorRecorderMode__Enum {
        namespace {
            app::AnimatorRecorderMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimatorRecorderMode__Enum__Class** type_info = &type_info_ref;
        inline app::AnimatorRecorderMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimatorRecorderMode__Enum__Class>(type_info, "UnityEngine", "AnimatorRecorderMode");
        }
        inline app::AnimatorRecorderMode__Enum* create() {
            return il2cpp::create_object<app::AnimatorRecorderMode__Enum>(get_class());
        }
    } // namespace AnimatorRecorderMode__Enum
} // namespace app::classes::types
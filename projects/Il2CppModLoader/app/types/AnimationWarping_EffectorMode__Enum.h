#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationWarping_EffectorMode__Enum {
        namespace {
            app::AnimationWarping_EffectorMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimationWarping_EffectorMode__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationWarping_EffectorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationWarping_EffectorMode__Enum__Class>(type_info, "RootMotion.Demos", "AnimationWarping", "EffectorMode");
        }
        inline app::AnimationWarping_EffectorMode__Enum* create() {
            return il2cpp::create_object<app::AnimationWarping_EffectorMode__Enum>(get_class());
        }
    } // namespace AnimationWarping_EffectorMode__Enum
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPlayer__Array {
        namespace {
            app::AnimationPlayer__Array__Class* type_info_ref = nullptr;
        }
        app::AnimationPlayer__Array__Class** type_info = &type_info_ref;
        inline app::AnimationPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationPlayer__Array__Class>(type_info, "Moon", "AnimationPlayer[]");
        }
        inline app::AnimationPlayer__Array* create() {
            return il2cpp::create_object<app::AnimationPlayer__Array>(get_class());
        }
    } // namespace AnimationPlayer__Array
} // namespace app::classes::types

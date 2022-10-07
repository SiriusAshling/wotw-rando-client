#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationSystem_CharacterAnimationState__Array {
        namespace {
            app::CharacterAnimationSystem_CharacterAnimationState__Array__Class* type_info_ref = nullptr;
        }
        app::CharacterAnimationSystem_CharacterAnimationState__Array__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationSystem_CharacterAnimationState__Array__Class>(type_info, "", "CharacterAnimationSystem+CharacterAnimationState[]");
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array* create() {
            return il2cpp::create_object<app::CharacterAnimationSystem_CharacterAnimationState__Array>(get_class());
        }
    } // namespace CharacterAnimationSystem_CharacterAnimationState__Array
} // namespace app::classes::types
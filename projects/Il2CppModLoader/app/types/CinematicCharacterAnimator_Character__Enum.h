#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator_Character__Enum {
        namespace {
            app::CinematicCharacterAnimator_Character__Enum__Class* type_info_ref = nullptr;
        }
        app::CinematicCharacterAnimator_Character__Enum__Class** type_info = &type_info_ref;
        inline app::CinematicCharacterAnimator_Character__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CinematicCharacterAnimator_Character__Enum__Class>(type_info, "Moon.Timeline", "CinematicCharacterAnimator", "Character");
        }
        inline app::CinematicCharacterAnimator_Character__Enum* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator_Character__Enum>(get_class());
        }
    } // namespace CinematicCharacterAnimator_Character__Enum
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyCinematicCharacterAnimator {
        namespace {
            app::LegacyCinematicCharacterAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyCinematicCharacterAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyCinematicCharacterAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCinematicCharacterAnimator__Class>(type_info, "", "LegacyCinematicCharacterAnimator");
        }
        inline app::LegacyCinematicCharacterAnimator* create() {
            return il2cpp::create_object<app::LegacyCinematicCharacterAnimator>(get_class());
        }
    } // namespace LegacyCinematicCharacterAnimator
} // namespace app::classes::types
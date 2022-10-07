#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteTransparencyTweenAnimator {
        namespace {
            app::SpriteTransparencyTweenAnimator__Class* type_info_ref = nullptr;
        }
        app::SpriteTransparencyTweenAnimator__Class** type_info = &type_info_ref;
        inline app::SpriteTransparencyTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpriteTransparencyTweenAnimator__Class>(type_info, "Moon.Timeline", "SpriteTransparencyTweenAnimator");
        }
        inline app::SpriteTransparencyTweenAnimator* create() {
            return il2cpp::create_object<app::SpriteTransparencyTweenAnimator>(get_class());
        }
    } // namespace SpriteTransparencyTweenAnimator
} // namespace app::classes::types
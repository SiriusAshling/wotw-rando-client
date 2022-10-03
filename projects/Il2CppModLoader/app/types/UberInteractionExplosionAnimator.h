#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionExplosionAnimator {
        namespace {
            app::UberInteractionExplosionAnimator__Class* type_info_ref = nullptr;
        }
        app::UberInteractionExplosionAnimator__Class** type_info = &type_info_ref;
        inline app::UberInteractionExplosionAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionExplosionAnimator__Class>(type_info, "", "UberInteractionExplosionAnimator");
        }
        inline app::UberInteractionExplosionAnimator* create() {
            return il2cpp::create_object<app::UberInteractionExplosionAnimator>(get_class());
        }
    } // namespace UberInteractionExplosionAnimator
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShurikenParticleAnimator {
        namespace {
            app::ShurikenParticleAnimator__Class* type_info_ref = nullptr;
        }
        app::ShurikenParticleAnimator__Class** type_info = &type_info_ref;
        inline app::ShurikenParticleAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShurikenParticleAnimator__Class>(type_info, "", "ShurikenParticleAnimator");
        }
        inline app::ShurikenParticleAnimator* create() {
            return il2cpp::create_object<app::ShurikenParticleAnimator>(get_class());
        }
    } // namespace ShurikenParticleAnimator
} // namespace app::classes::types
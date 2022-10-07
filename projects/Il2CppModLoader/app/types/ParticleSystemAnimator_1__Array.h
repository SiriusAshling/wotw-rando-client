#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemAnimator_1__Array {
        namespace {
            app::ParticleSystemAnimator_1__Array__Class* type_info_ref = nullptr;
        }
        app::ParticleSystemAnimator_1__Array__Class** type_info = &type_info_ref;
        inline app::ParticleSystemAnimator_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemAnimator_1__Array__Class>(type_info, "", "ParticleSystemAnimator[]");
        }
        inline app::ParticleSystemAnimator_1__Array* create() {
            return il2cpp::create_object<app::ParticleSystemAnimator_1__Array>(get_class());
        }
    } // namespace ParticleSystemAnimator_1__Array
} // namespace app::classes::types
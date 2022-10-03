#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashEffectPoseAnimator {
        namespace {
            app::SpiritLeashEffectPoseAnimator__Class* type_info_ref = nullptr;
        }
        app::SpiritLeashEffectPoseAnimator__Class** type_info = &type_info_ref;
        inline app::SpiritLeashEffectPoseAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffectPoseAnimator__Class>(type_info, "", "SpiritLeashEffectPoseAnimator");
        }
        inline app::SpiritLeashEffectPoseAnimator* create() {
            return il2cpp::create_object<app::SpiritLeashEffectPoseAnimator>(get_class());
        }
        inline app::SpiritLeashEffectPoseAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLeashEffectPoseAnimator__Array>(get_class(), size);
        }
    } // namespace SpiritLeashEffectPoseAnimator
} // namespace app::classes::types

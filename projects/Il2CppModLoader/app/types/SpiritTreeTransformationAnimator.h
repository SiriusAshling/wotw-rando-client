#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritTreeTransformationAnimator {
        namespace {
            app::SpiritTreeTransformationAnimator__Class* type_info_ref = nullptr;
        }
        app::SpiritTreeTransformationAnimator__Class** type_info = &type_info_ref;
        inline app::SpiritTreeTransformationAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpiritTreeTransformationAnimator__Class>(type_info, "", "SpiritTreeTransformationAnimator");
        }
        inline app::SpiritTreeTransformationAnimator* create() {
            return il2cpp::create_object<app::SpiritTreeTransformationAnimator>(get_class());
        }
    } // namespace SpiritTreeTransformationAnimator
} // namespace app::classes::types

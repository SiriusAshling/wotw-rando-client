#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VectorAnimationParameterAnimator {
        namespace {
            app::VectorAnimationParameterAnimator__Class* type_info_ref = nullptr;
        }
        app::VectorAnimationParameterAnimator__Class** type_info = &type_info_ref;
        inline app::VectorAnimationParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::VectorAnimationParameterAnimator__Class>(type_info, "", "VectorAnimationParameterAnimator");
        }
        inline app::VectorAnimationParameterAnimator* create() {
            return il2cpp::create_object<app::VectorAnimationParameterAnimator>(get_class());
        }
    } // namespace VectorAnimationParameterAnimator
} // namespace app::classes::types
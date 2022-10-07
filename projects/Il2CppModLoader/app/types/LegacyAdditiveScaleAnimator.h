#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyAdditiveScaleAnimator {
        namespace {
            app::LegacyAdditiveScaleAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyAdditiveScaleAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyAdditiveScaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyAdditiveScaleAnimator__Class>(type_info, "", "LegacyAdditiveScaleAnimator");
        }
        inline app::LegacyAdditiveScaleAnimator* create() {
            return il2cpp::create_object<app::LegacyAdditiveScaleAnimator>(get_class());
        }
    } // namespace LegacyAdditiveScaleAnimator
} // namespace app::classes::types
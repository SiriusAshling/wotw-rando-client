#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyUberTransformFollowAnimator {
        namespace {
            app::LegacyUberTransformFollowAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyUberTransformFollowAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyUberTransformFollowAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyUberTransformFollowAnimator__Class>(type_info, "", "LegacyUberTransformFollowAnimator");
        }
        inline app::LegacyUberTransformFollowAnimator* create() {
            return il2cpp::create_object<app::LegacyUberTransformFollowAnimator>(get_class());
        }
    } // namespace LegacyUberTransformFollowAnimator
} // namespace app::classes::types
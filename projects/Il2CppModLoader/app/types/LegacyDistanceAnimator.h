#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyDistanceAnimator {
        namespace {
            app::LegacyDistanceAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyDistanceAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyDistanceAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyDistanceAnimator__Class>(type_info, "", "LegacyDistanceAnimator");
        }
        inline app::LegacyDistanceAnimator* create() {
            return il2cpp::create_object<app::LegacyDistanceAnimator>(get_class());
        }
    } // namespace LegacyDistanceAnimator
} // namespace app::classes::types

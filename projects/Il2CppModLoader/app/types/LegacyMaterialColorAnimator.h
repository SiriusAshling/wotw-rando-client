#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialColorAnimator {
        namespace {
            app::LegacyMaterialColorAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyMaterialColorAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyMaterialColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialColorAnimator__Class>(type_info, "", "LegacyMaterialColorAnimator");
        }
        inline app::LegacyMaterialColorAnimator* create() {
            return il2cpp::create_object<app::LegacyMaterialColorAnimator>(get_class());
        }
    } // namespace LegacyMaterialColorAnimator
} // namespace app::classes::types
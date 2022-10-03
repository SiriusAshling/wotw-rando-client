#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPostDesaturationAnimator {
        namespace {
            app::UberPostDesaturationAnimator__Class* type_info_ref = nullptr;
        }
        app::UberPostDesaturationAnimator__Class** type_info = &type_info_ref;
        inline app::UberPostDesaturationAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostDesaturationAnimator__Class>(type_info, "", "UberPostDesaturationAnimator");
        }
        inline app::UberPostDesaturationAnimator* create() {
            return il2cpp::create_object<app::UberPostDesaturationAnimator>(get_class());
        }
    } // namespace UberPostDesaturationAnimator
} // namespace app::classes::types

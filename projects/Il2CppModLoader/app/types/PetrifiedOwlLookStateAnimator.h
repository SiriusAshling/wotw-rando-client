#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlLookStateAnimator {
        namespace {
            app::PetrifiedOwlLookStateAnimator__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlLookStateAnimator__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlLookStateAnimator__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlLookStateAnimator__Class>(type_info, "Moon", "PetrifiedOwlLookStateAnimator");
        }
        inline app::PetrifiedOwlLookStateAnimator* create() {
            return il2cpp::create_object<app::PetrifiedOwlLookStateAnimator>(get_class());
        }
    } // namespace PetrifiedOwlLookStateAnimator
} // namespace app::classes::types
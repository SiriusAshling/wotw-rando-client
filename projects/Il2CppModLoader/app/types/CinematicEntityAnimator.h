#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CinematicEntityAnimator {
        namespace {
            app::CinematicEntityAnimator__Class* type_info_ref = nullptr;
        }
        app::CinematicEntityAnimator__Class** type_info = &type_info_ref;
        inline app::CinematicEntityAnimator__Class* get_class() {
            return il2cpp::get_class<app::CinematicEntityAnimator__Class>(type_info, "", "CinematicEntityAnimator");
        }
        inline app::CinematicEntityAnimator* create() {
            return il2cpp::create_object<app::CinematicEntityAnimator>(get_class());
        }
    } // namespace CinematicEntityAnimator
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraAnimator {
        namespace {
            app::CameraAnimator__Class* type_info_ref = nullptr;
        }
        app::CameraAnimator__Class** type_info = &type_info_ref;
        inline app::CameraAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraAnimator__Class>(type_info, "", "CameraAnimator");
        }
        inline app::CameraAnimator* create() {
            return il2cpp::create_object<app::CameraAnimator>(get_class());
        }
    } // namespace CameraAnimator
} // namespace app::classes::types
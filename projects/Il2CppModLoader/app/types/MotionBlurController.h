#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MotionBlurController {
        namespace {
            app::MotionBlurController__Class* type_info_ref = nullptr;
        }
        app::MotionBlurController__Class** type_info = &type_info_ref;
        inline app::MotionBlurController__Class* get_class() {
            return il2cpp::get_class<app::MotionBlurController__Class>(type_info, "", "MotionBlurController");
        }
        inline app::MotionBlurController* create() {
            return il2cpp::create_object<app::MotionBlurController>(get_class());
        }
    } // namespace MotionBlurController
} // namespace app::classes::types
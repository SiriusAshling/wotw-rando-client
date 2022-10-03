#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveToTargetAnimator {
        namespace {
            app::MoveToTargetAnimator__Class* type_info_ref = nullptr;
        }
        app::MoveToTargetAnimator__Class** type_info = &type_info_ref;
        inline app::MoveToTargetAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveToTargetAnimator__Class>(type_info, "", "MoveToTargetAnimator");
        }
        inline app::MoveToTargetAnimator* create() {
            return il2cpp::create_object<app::MoveToTargetAnimator>(get_class());
        }
    } // namespace MoveToTargetAnimator
} // namespace app::classes::types

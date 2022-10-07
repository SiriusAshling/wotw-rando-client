#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SnakeAnimator {
        namespace {
            app::SnakeAnimator__Class* type_info_ref = nullptr;
        }
        app::SnakeAnimator__Class** type_info = &type_info_ref;
        inline app::SnakeAnimator__Class* get_class() {
            return il2cpp::get_class<app::SnakeAnimator__Class>(type_info, "UnityEngine", "SnakeAnimator");
        }
        inline app::SnakeAnimator* create() {
            return il2cpp::create_object<app::SnakeAnimator>(get_class());
        }
    } // namespace SnakeAnimator
} // namespace app::classes::types
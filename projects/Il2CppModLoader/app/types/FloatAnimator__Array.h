#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatAnimator__Array {
        namespace {
            app::FloatAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::FloatAnimator__Array__Class** type_info = &type_info_ref;
        inline app::FloatAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatAnimator__Array__Class>(type_info, "Moon.Timeline", "FloatAnimator[]");
        }
        inline app::FloatAnimator__Array* create() {
            return il2cpp::create_object<app::FloatAnimator__Array>(get_class());
        }
    } // namespace FloatAnimator__Array
} // namespace app::classes::types
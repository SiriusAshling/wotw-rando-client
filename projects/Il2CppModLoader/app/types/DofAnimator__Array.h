#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DofAnimator__Array {
        namespace {
            app::DofAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::DofAnimator__Array__Class** type_info = &type_info_ref;
        inline app::DofAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::DofAnimator__Array__Class>(type_info, "", "DofAnimator[]");
        }
        inline app::DofAnimator__Array* create() {
            return il2cpp::create_object<app::DofAnimator__Array>(get_class());
        }
    } // namespace DofAnimator__Array
} // namespace app::classes::types
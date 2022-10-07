#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriAnimator {
        namespace {
            app::OriAnimator__Class* type_info_ref = nullptr;
        }
        app::OriAnimator__Class** type_info = &type_info_ref;
        inline app::OriAnimator__Class* get_class() {
            return il2cpp::get_class<app::OriAnimator__Class>(type_info, "", "OriAnimator");
        }
        inline app::OriAnimator* create() {
            return il2cpp::create_object<app::OriAnimator>(get_class());
        }
    } // namespace OriAnimator
} // namespace app::classes::types
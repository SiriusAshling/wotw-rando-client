#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitAnimator {
        namespace {
            app::WaitAnimator__Class* type_info_ref = nullptr;
        }
        app::WaitAnimator__Class** type_info = &type_info_ref;
        inline app::WaitAnimator__Class* get_class() {
            return il2cpp::get_class<app::WaitAnimator__Class>(type_info, "", "WaitAnimator");
        }
        inline app::WaitAnimator* create() {
            return il2cpp::create_object<app::WaitAnimator>(get_class());
        }
    } // namespace WaitAnimator
} // namespace app::classes::types

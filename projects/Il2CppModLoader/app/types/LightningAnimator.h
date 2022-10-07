#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightningAnimator {
        namespace {
            app::LightningAnimator__Class* type_info_ref = nullptr;
        }
        app::LightningAnimator__Class** type_info = &type_info_ref;
        inline app::LightningAnimator__Class* get_class() {
            return il2cpp::get_class<app::LightningAnimator__Class>(type_info, "", "LightningAnimator");
        }
        inline app::LightningAnimator* create() {
            return il2cpp::create_object<app::LightningAnimator>(get_class());
        }
    } // namespace LightningAnimator
} // namespace app::classes::types
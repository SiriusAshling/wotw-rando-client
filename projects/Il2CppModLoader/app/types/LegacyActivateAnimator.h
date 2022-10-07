#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyActivateAnimator {
        namespace {
            app::LegacyActivateAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyActivateAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyActivateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyActivateAnimator__Class>(type_info, "", "LegacyActivateAnimator");
        }
        inline app::LegacyActivateAnimator* create() {
            return il2cpp::create_object<app::LegacyActivateAnimator>(get_class());
        }
    } // namespace LegacyActivateAnimator
} // namespace app::classes::types
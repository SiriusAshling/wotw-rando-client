#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyActivateAnimator_TargetMode__Enum {
        namespace {
            app::LegacyActivateAnimator_TargetMode__Enum__Class* type_info_ref = nullptr;
        }
        app::LegacyActivateAnimator_TargetMode__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyActivateAnimator_TargetMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyActivateAnimator_TargetMode__Enum__Class>(type_info, "", "LegacyActivateAnimator", "TargetMode");
        }
        inline app::LegacyActivateAnimator_TargetMode__Enum* create() {
            return il2cpp::create_object<app::LegacyActivateAnimator_TargetMode__Enum>(get_class());
        }
    } // namespace LegacyActivateAnimator_TargetMode__Enum
} // namespace app::classes::types
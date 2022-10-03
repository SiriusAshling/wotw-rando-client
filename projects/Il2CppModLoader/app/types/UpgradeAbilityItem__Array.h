#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradeAbilityItem__Array {
        namespace {
            app::UpgradeAbilityItem__Array__Class* type_info_ref = nullptr;
        }
        app::UpgradeAbilityItem__Array__Class** type_info = &type_info_ref;
        inline app::UpgradeAbilityItem__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradeAbilityItem__Array__Class>(type_info, "", "UpgradeAbilityItem[]");
        }
        inline app::UpgradeAbilityItem__Array* create() {
            return il2cpp::create_object<app::UpgradeAbilityItem__Array>(get_class());
        }
    } // namespace UpgradeAbilityItem__Array
} // namespace app::classes::types

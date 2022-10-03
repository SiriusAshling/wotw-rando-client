#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CombinedUpgradeEffectiveness_UpgradableAbility {
        namespace {
            app::CombinedUpgradeEffectiveness_UpgradableAbility__Class* type_info_ref = nullptr;
        }
        app::CombinedUpgradeEffectiveness_UpgradableAbility__Class** type_info = &type_info_ref;
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Class* get_class() {
            return il2cpp::get_nested_class<app::CombinedUpgradeEffectiveness_UpgradableAbility__Class>(type_info, "", "CombinedUpgradeEffectiveness", "UpgradableAbility");
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility* create() {
            return il2cpp::create_object<app::CombinedUpgradeEffectiveness_UpgradableAbility>(get_class());
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array* create_array(int size) {
            return il2cpp::array_new<app::CombinedUpgradeEffectiveness_UpgradableAbility__Array>(get_class(), size);
        }
    } // namespace CombinedUpgradeEffectiveness_UpgradableAbility
} // namespace app::classes::types

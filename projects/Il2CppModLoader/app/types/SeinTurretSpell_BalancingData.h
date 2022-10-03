#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinTurretSpell_BalancingData {
        namespace {
            app::SeinTurretSpell_BalancingData__Class* type_info_ref = nullptr;
        }
        app::SeinTurretSpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinTurretSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinTurretSpell_BalancingData__Class>(type_info, "", "SeinTurretSpell_BalancingData");
        }
        inline app::SeinTurretSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinTurretSpell_BalancingData>(get_class());
        }
    } // namespace SeinTurretSpell_BalancingData
} // namespace app::classes::types

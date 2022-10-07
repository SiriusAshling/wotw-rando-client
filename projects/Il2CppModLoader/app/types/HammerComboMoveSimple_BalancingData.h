#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HammerComboMoveSimple_BalancingData {
        namespace {
            app::HammerComboMoveSimple_BalancingData__Class* type_info_ref = nullptr;
        }
        app::HammerComboMoveSimple_BalancingData__Class** type_info = &type_info_ref;
        inline app::HammerComboMoveSimple_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveSimple_BalancingData__Class>(type_info, "", "HammerComboMoveSimple_BalancingData");
        }
        inline app::HammerComboMoveSimple_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMoveSimple_BalancingData>(get_class());
        }
    } // namespace HammerComboMoveSimple_BalancingData
} // namespace app::classes::types
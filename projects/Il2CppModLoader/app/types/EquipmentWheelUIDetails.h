#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentWheelUIDetails {
        namespace {
            app::EquipmentWheelUIDetails__Class* type_info_ref = nullptr;
        }
        app::EquipmentWheelUIDetails__Class** type_info = &type_info_ref;
        inline app::EquipmentWheelUIDetails__Class* get_class() {
            return il2cpp::get_class<app::EquipmentWheelUIDetails__Class>(type_info, "", "EquipmentWheelUIDetails");
        }
        inline app::EquipmentWheelUIDetails* create() {
            return il2cpp::create_object<app::EquipmentWheelUIDetails>(get_class());
        }
    } // namespace EquipmentWheelUIDetails
} // namespace app::classes::types

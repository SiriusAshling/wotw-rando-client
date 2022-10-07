#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection_ItemCache__Array {
        namespace {
            app::EquipmentRadialSelection_ItemCache__Array__Class* type_info_ref = nullptr;
        }
        app::EquipmentRadialSelection_ItemCache__Array__Class** type_info = &type_info_ref;
        inline app::EquipmentRadialSelection_ItemCache__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentRadialSelection_ItemCache__Array__Class>(type_info, "", "EquipmentRadialSelection+ItemCache[]");
        }
        inline app::EquipmentRadialSelection_ItemCache__Array* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection_ItemCache__Array>(get_class());
        }
    } // namespace EquipmentRadialSelection_ItemCache__Array
} // namespace app::classes::types
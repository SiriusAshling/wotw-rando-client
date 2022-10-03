#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatSettingStrings_EquipmentLabels {
        namespace {
            app::StatSettingStrings_EquipmentLabels__Class* type_info_ref = nullptr;
        }
        app::StatSettingStrings_EquipmentLabels__Class** type_info = &type_info_ref;
        inline app::StatSettingStrings_EquipmentLabels__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSettingStrings_EquipmentLabels__Class>(type_info, "", "StatSettingStrings", "EquipmentLabels");
        }
        inline app::StatSettingStrings_EquipmentLabels* create() {
            return il2cpp::create_object<app::StatSettingStrings_EquipmentLabels>(get_class());
        }
        inline app::StatSettingStrings_EquipmentLabels__Boxed* box(app::StatSettingStrings_EquipmentLabels value) {
            return il2cpp::box_value<app::StatSettingStrings_EquipmentLabels__Boxed>(get_class(), value);
        }
        inline app::StatSettingStrings_EquipmentLabels__Array* create_array(int size) {
            return il2cpp::array_new<app::StatSettingStrings_EquipmentLabels__Array>(get_class(), size);
        }
    } // namespace StatSettingStrings_EquipmentLabels
} // namespace app::classes::types

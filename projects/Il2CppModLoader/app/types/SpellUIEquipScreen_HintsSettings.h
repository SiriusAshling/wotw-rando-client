#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIEquipScreen_HintsSettings {
        namespace {
            app::SpellUIEquipScreen_HintsSettings__Class* type_info_ref = nullptr;
        }
        app::SpellUIEquipScreen_HintsSettings__Class** type_info = &type_info_ref;
        inline app::SpellUIEquipScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIEquipScreen_HintsSettings__Class>(type_info, "", "SpellUIEquipScreen", "HintsSettings");
        }
        inline app::SpellUIEquipScreen_HintsSettings* create() {
            return il2cpp::create_object<app::SpellUIEquipScreen_HintsSettings>(get_class());
        }
        inline app::SpellUIEquipScreen_HintsSettings__Boxed* box(app::SpellUIEquipScreen_HintsSettings value) {
            return il2cpp::box_value<app::SpellUIEquipScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace SpellUIEquipScreen_HintsSettings
} // namespace app::classes::types
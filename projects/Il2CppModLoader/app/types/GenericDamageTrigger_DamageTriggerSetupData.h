#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericDamageTrigger_DamageTriggerSetupData {
        namespace {
            app::GenericDamageTrigger_DamageTriggerSetupData__Class* type_info_ref = nullptr;
        }
        app::GenericDamageTrigger_DamageTriggerSetupData__Class** type_info = &type_info_ref;
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericDamageTrigger_DamageTriggerSetupData__Class>(type_info, "", "GenericDamageTrigger", "DamageTriggerSetupData");
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupData* create() {
            return il2cpp::create_object<app::GenericDamageTrigger_DamageTriggerSetupData>(get_class());
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericDamageTrigger_DamageTriggerSetupData__Array>(get_class(), size);
        }
    } // namespace GenericDamageTrigger_DamageTriggerSetupData
} // namespace app::classes::types

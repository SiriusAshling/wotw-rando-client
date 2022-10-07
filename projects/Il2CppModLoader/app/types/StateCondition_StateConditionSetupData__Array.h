#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateCondition_StateConditionSetupData__Array {
        namespace {
            app::StateCondition_StateConditionSetupData__Array__Class* type_info_ref = nullptr;
        }
        app::StateCondition_StateConditionSetupData__Array__Class** type_info = &type_info_ref;
        inline app::StateCondition_StateConditionSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::StateCondition_StateConditionSetupData__Array__Class>(type_info, "", "StateCondition+StateConditionSetupData[]");
        }
        inline app::StateCondition_StateConditionSetupData__Array* create() {
            return il2cpp::create_object<app::StateCondition_StateConditionSetupData__Array>(get_class());
        }
    } // namespace StateCondition_StateConditionSetupData__Array
} // namespace app::classes::types
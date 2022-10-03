#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeStateDialogDecorator_StateConditionSetupHolder {
        namespace {
            app::ChangeStateDialogDecorator_StateConditionSetupHolder__Class* type_info_ref = nullptr;
        }
        app::ChangeStateDialogDecorator_StateConditionSetupHolder__Class** type_info = &type_info_ref;
        inline app::ChangeStateDialogDecorator_StateConditionSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::ChangeStateDialogDecorator_StateConditionSetupHolder__Class>(type_info, "Moon.dialogGraph", "ChangeStateDialogDecorator", "StateConditionSetupHolder");
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupHolder* create() {
            return il2cpp::create_object<app::ChangeStateDialogDecorator_StateConditionSetupHolder>(get_class());
        }
    } // namespace ChangeStateDialogDecorator_StateConditionSetupHolder
} // namespace app::classes::types

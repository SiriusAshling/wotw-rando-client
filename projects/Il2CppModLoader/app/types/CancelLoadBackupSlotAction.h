#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelLoadBackupSlotAction {
        namespace {
            app::CancelLoadBackupSlotAction__Class* type_info_ref = nullptr;
        }
        app::CancelLoadBackupSlotAction__Class** type_info = &type_info_ref;
        inline app::CancelLoadBackupSlotAction__Class* get_class() {
            return il2cpp::get_class<app::CancelLoadBackupSlotAction__Class>(type_info, "", "CancelLoadBackupSlotAction");
        }
        inline app::CancelLoadBackupSlotAction* create() {
            return il2cpp::create_object<app::CancelLoadBackupSlotAction>(get_class());
        }
    } // namespace CancelLoadBackupSlotAction
} // namespace app::classes::types
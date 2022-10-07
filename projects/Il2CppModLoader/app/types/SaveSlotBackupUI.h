#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupUI {
        namespace {
            app::SaveSlotBackupUI__Class* type_info_ref = nullptr;
        }
        app::SaveSlotBackupUI__Class** type_info = &type_info_ref;
        inline app::SaveSlotBackupUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupUI__Class>(type_info, "", "SaveSlotBackupUI");
        }
        inline app::SaveSlotBackupUI* create() {
            return il2cpp::create_object<app::SaveSlotBackupUI>(get_class());
        }
    } // namespace SaveSlotBackupUI
} // namespace app::classes::types
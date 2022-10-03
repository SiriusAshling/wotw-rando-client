#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BackupSaveSlotUI__Array {
        namespace {
            app::BackupSaveSlotUI__Array__Class* type_info_ref = nullptr;
        }
        app::BackupSaveSlotUI__Array__Class** type_info = &type_info_ref;
        inline app::BackupSaveSlotUI__Array__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveSlotUI__Array__Class>(type_info, "", "BackupSaveSlotUI[]");
        }
        inline app::BackupSaveSlotUI__Array* create() {
            return il2cpp::create_object<app::BackupSaveSlotUI__Array>(get_class());
        }
    } // namespace BackupSaveSlotUI__Array
} // namespace app::classes::types

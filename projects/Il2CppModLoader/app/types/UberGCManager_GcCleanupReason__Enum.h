#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGCManager_GcCleanupReason__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberGCManager_GcCleanupReason__Enum__Class** type_info;
        inline app::UberGCManager_GcCleanupReason__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCManager_GcCleanupReason__Enum__Class>(type_info, "", "UberGCManager", "GcCleanupReason");
        }
        inline app::UberGCManager_GcCleanupReason__Enum* create() {
            return il2cpp::create_object<app::UberGCManager_GcCleanupReason__Enum>(get_class());
        }
    } // namespace UberGCManager_GcCleanupReason__Enum
} // namespace app::classes::types

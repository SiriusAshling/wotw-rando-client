#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageAppSyncStatusCheck_t {
        namespace {
            app::RemoteStorageAppSyncStatusCheck_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageAppSyncStatusCheck_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageAppSyncStatusCheck_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageAppSyncStatusCheck_t__Class>(type_info, "Steamworks", "RemoteStorageAppSyncStatusCheck_t");
        }
        inline app::RemoteStorageAppSyncStatusCheck_t* create() {
            return il2cpp::create_object<app::RemoteStorageAppSyncStatusCheck_t>(get_class());
        }
        inline app::RemoteStorageAppSyncStatusCheck_t__Boxed* box(app::RemoteStorageAppSyncStatusCheck_t value) {
            return il2cpp::box_value<app::RemoteStorageAppSyncStatusCheck_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageAppSyncStatusCheck_t
} // namespace app::classes::types
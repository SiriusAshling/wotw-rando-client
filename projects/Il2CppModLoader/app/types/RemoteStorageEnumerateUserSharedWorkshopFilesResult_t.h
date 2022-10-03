#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageEnumerateUserSharedWorkshopFilesResult_t {
        namespace {
            app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class>(type_info, "Steamworks", "RemoteStorageEnumerateUserSharedWorkshopFilesResult_t");
        }
        inline app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t>(get_class());
        }
        inline app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Boxed* box(app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t value) {
            return il2cpp::box_value<app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageEnumerateUserSharedWorkshopFilesResult_t
} // namespace app::classes::types

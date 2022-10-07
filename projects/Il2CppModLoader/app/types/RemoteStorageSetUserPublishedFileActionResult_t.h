#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageSetUserPublishedFileActionResult_t {
        namespace {
            app::RemoteStorageSetUserPublishedFileActionResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageSetUserPublishedFileActionResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageSetUserPublishedFileActionResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageSetUserPublishedFileActionResult_t__Class>(type_info, "Steamworks", "RemoteStorageSetUserPublishedFileActionResult_t");
        }
        inline app::RemoteStorageSetUserPublishedFileActionResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageSetUserPublishedFileActionResult_t>(get_class());
        }
        inline app::RemoteStorageSetUserPublishedFileActionResult_t__Boxed* box(app::RemoteStorageSetUserPublishedFileActionResult_t value) {
            return il2cpp::box_value<app::RemoteStorageSetUserPublishedFileActionResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageSetUserPublishedFileActionResult_t
} // namespace app::classes::types
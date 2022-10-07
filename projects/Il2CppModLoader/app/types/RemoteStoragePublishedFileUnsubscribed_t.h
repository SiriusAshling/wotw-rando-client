#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStoragePublishedFileUnsubscribed_t {
        namespace {
            app::RemoteStoragePublishedFileUnsubscribed_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStoragePublishedFileUnsubscribed_t__Class** type_info = &type_info_ref;
        inline app::RemoteStoragePublishedFileUnsubscribed_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishedFileUnsubscribed_t__Class>(type_info, "Steamworks", "RemoteStoragePublishedFileUnsubscribed_t");
        }
        inline app::RemoteStoragePublishedFileUnsubscribed_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishedFileUnsubscribed_t>(get_class());
        }
        inline app::RemoteStoragePublishedFileUnsubscribed_t__Boxed* box(app::RemoteStoragePublishedFileUnsubscribed_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishedFileUnsubscribed_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishedFileUnsubscribed_t
} // namespace app::classes::types
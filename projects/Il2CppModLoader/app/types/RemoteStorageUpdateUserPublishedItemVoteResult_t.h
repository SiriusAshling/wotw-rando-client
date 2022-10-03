#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageUpdateUserPublishedItemVoteResult_t {
        namespace {
            app::RemoteStorageUpdateUserPublishedItemVoteResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageUpdateUserPublishedItemVoteResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageUpdateUserPublishedItemVoteResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageUpdateUserPublishedItemVoteResult_t__Class>(type_info, "Steamworks", "RemoteStorageUpdateUserPublishedItemVoteResult_t");
        }
        inline app::RemoteStorageUpdateUserPublishedItemVoteResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageUpdateUserPublishedItemVoteResult_t>(get_class());
        }
        inline app::RemoteStorageUpdateUserPublishedItemVoteResult_t__Boxed* box(app::RemoteStorageUpdateUserPublishedItemVoteResult_t value) {
            return il2cpp::box_value<app::RemoteStorageUpdateUserPublishedItemVoteResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageUpdateUserPublishedItemVoteResult_t
} // namespace app::classes::types

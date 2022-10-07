#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserCreatedEventDataDoc {
        namespace {
            app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserCreatedEventDataDoc");
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserCreatedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserCreatedEventDataDoc
} // namespace app::classes::types
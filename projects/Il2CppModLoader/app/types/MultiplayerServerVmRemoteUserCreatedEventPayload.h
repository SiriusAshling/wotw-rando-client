#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserCreatedEventPayload {
        namespace {
            app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserCreatedEventPayload");
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserCreatedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserCreatedEventPayload
} // namespace app::classes::types
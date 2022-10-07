#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerRequestedEventDataDoc {
        namespace {
            app::MultiplayerServerRequestedEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerRequestedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerRequestedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerRequestedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerRequestedEventDataDoc");
        }
        inline app::MultiplayerServerRequestedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerRequestedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerRequestedEventDataDoc
} // namespace app::classes::types
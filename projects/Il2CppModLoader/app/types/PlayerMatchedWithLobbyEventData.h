#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerMatchedWithLobbyEventData {
        namespace {
            app::PlayerMatchedWithLobbyEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerMatchedWithLobbyEventData__Class** type_info = &type_info_ref;
        inline app::PlayerMatchedWithLobbyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerMatchedWithLobbyEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerMatchedWithLobbyEventData");
        }
        inline app::PlayerMatchedWithLobbyEventData* create() {
            return il2cpp::create_object<app::PlayerMatchedWithLobbyEventData>(get_class());
        }
    } // namespace PlayerMatchedWithLobbyEventData
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartGameResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StartGameResponse__Class** type_info;
        inline app::StartGameResponse__Class* get_class() {
            return il2cpp::get_class<app::StartGameResponse__Class>(type_info, "PlayFab.MatchmakerModels", "StartGameResponse");
        }
        inline app::StartGameResponse* create() {
            return il2cpp::create_object<app::StartGameResponse>(get_class());
        }
    } // namespace StartGameResponse
} // namespace app::classes::types
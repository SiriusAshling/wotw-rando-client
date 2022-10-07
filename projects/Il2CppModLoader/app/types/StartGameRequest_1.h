#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartGameRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StartGameRequest_1__Class** type_info;
        inline app::StartGameRequest_1__Class* get_class() {
            return il2cpp::get_class<app::StartGameRequest_1__Class>(type_info, "PlayFab.MatchmakerModels", "StartGameRequest");
        }
        inline app::StartGameRequest_1* create() {
            return il2cpp::create_object<app::StartGameRequest_1>(get_class());
        }
    } // namespace StartGameRequest_1
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakingPlayer__Array {
        namespace {
            app::MatchmakingPlayer__Array__Class* type_info_ref = nullptr;
        }
        app::MatchmakingPlayer__Array__Class** type_info = &type_info_ref;
        inline app::MatchmakingPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayer__Array__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingPlayer[]");
        }
        inline app::MatchmakingPlayer__Array* create() {
            return il2cpp::create_object<app::MatchmakingPlayer__Array>(get_class());
        }
    } // namespace MatchmakingPlayer__Array
} // namespace app::classes::types
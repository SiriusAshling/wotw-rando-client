#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterLeaderboardEntry_1 {
        namespace {
            app::CharacterLeaderboardEntry_1__Class* type_info_ref = nullptr;
        }
        app::CharacterLeaderboardEntry_1__Class** type_info = &type_info_ref;
        inline app::CharacterLeaderboardEntry_1__Class* get_class() {
            return il2cpp::get_class<app::CharacterLeaderboardEntry_1__Class>(type_info, "PlayFab.ServerModels", "CharacterLeaderboardEntry");
        }
        inline app::CharacterLeaderboardEntry_1* create() {
            return il2cpp::create_object<app::CharacterLeaderboardEntry_1>(get_class());
        }
        inline app::CharacterLeaderboardEntry_1__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterLeaderboardEntry_1__Array>(get_class(), size);
        }
    } // namespace CharacterLeaderboardEntry_1
} // namespace app::classes::types

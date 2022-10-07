#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserSteamInfo_1 {
        namespace {
            app::UserSteamInfo_1__Class* type_info_ref = nullptr;
        }
        app::UserSteamInfo_1__Class** type_info = &type_info_ref;
        inline app::UserSteamInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserSteamInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserSteamInfo");
        }
        inline app::UserSteamInfo_1* create() {
            return il2cpp::create_object<app::UserSteamInfo_1>(get_class());
        }
    } // namespace UserSteamInfo_1
} // namespace app::classes::types
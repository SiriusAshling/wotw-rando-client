#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFriendsListResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetFriendsListResult_1__Class** type_info;
        inline app::GetFriendsListResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListResult_1__Class>(type_info, "PlayFab.ServerModels", "GetFriendsListResult");
        }
        inline app::GetFriendsListResult_1* create() {
            return il2cpp::create_object<app::GetFriendsListResult_1>(get_class());
        }
    } // namespace GetFriendsListResult_1
} // namespace app::classes::types
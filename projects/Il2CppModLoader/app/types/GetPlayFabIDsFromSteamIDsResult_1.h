#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromSteamIDsResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromSteamIDsResult_1__Class** type_info;
        inline app::GetPlayFabIDsFromSteamIDsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromSteamIDsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromSteamIDsResult");
        }
        inline app::GetPlayFabIDsFromSteamIDsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromSteamIDsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromSteamIDsResult_1
} // namespace app::classes::types

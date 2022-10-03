#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserTwitchInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserTwitchInfo__Class** type_info;
        inline app::UserTwitchInfo__Class* get_class() {
            return il2cpp::get_class<app::UserTwitchInfo__Class>(type_info, "PlayFab.ClientModels", "UserTwitchInfo");
        }
        inline app::UserTwitchInfo* create() {
            return il2cpp::create_object<app::UserTwitchInfo>(get_class());
        }
    } // namespace UserTwitchInfo
} // namespace app::classes::types

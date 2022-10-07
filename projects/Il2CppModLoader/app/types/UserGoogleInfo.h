#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserGoogleInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserGoogleInfo__Class** type_info;
        inline app::UserGoogleInfo__Class* get_class() {
            return il2cpp::get_class<app::UserGoogleInfo__Class>(type_info, "PlayFab.ClientModels", "UserGoogleInfo");
        }
        inline app::UserGoogleInfo* create() {
            return il2cpp::create_object<app::UserGoogleInfo>(get_class());
        }
    } // namespace UserGoogleInfo
} // namespace app::classes::types
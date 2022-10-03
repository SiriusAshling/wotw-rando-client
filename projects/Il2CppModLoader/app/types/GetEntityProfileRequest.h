#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetEntityProfileRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetEntityProfileRequest__Class** type_info;
        inline app::GetEntityProfileRequest__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfileRequest__Class>(type_info, "PlayFab.ProfilesModels", "GetEntityProfileRequest");
        }
        inline app::GetEntityProfileRequest* create() {
            return il2cpp::create_object<app::GetEntityProfileRequest>(get_class());
        }
    } // namespace GetEntityProfileRequest
} // namespace app::classes::types

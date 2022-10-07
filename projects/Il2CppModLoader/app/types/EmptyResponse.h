#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyResponse__Class** type_info;
        inline app::EmptyResponse__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse__Class>(type_info, "PlayFab.ClientModels", "EmptyResponse");
        }
        inline app::EmptyResponse* create() {
            return il2cpp::create_object<app::EmptyResponse>(get_class());
        }
    } // namespace EmptyResponse
} // namespace app::classes::types
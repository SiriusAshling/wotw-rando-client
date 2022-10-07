#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddUserVirtualCurrencyRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddUserVirtualCurrencyRequest__Class** type_info;
        inline app::AddUserVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::AddUserVirtualCurrencyRequest__Class>(type_info, "PlayFab.ClientModels", "AddUserVirtualCurrencyRequest");
        }
        inline app::AddUserVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::AddUserVirtualCurrencyRequest>(get_class());
        }
    } // namespace AddUserVirtualCurrencyRequest
} // namespace app::classes::types
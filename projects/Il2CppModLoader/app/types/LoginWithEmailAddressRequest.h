#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithEmailAddressRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithEmailAddressRequest__Class** type_info;
        inline app::LoginWithEmailAddressRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithEmailAddressRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithEmailAddressRequest");
        }
        inline app::LoginWithEmailAddressRequest* create() {
            return il2cpp::create_object<app::LoginWithEmailAddressRequest>(get_class());
        }
    } // namespace LoginWithEmailAddressRequest
} // namespace app::classes::types

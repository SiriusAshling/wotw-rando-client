#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RedeemMatchmakerTicketRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RedeemMatchmakerTicketRequest__Class** type_info;
        inline app::RedeemMatchmakerTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::RedeemMatchmakerTicketRequest__Class>(type_info, "PlayFab.ServerModels", "RedeemMatchmakerTicketRequest");
        }
        inline app::RedeemMatchmakerTicketRequest* create() {
            return il2cpp::create_object<app::RedeemMatchmakerTicketRequest>(get_class());
        }
    } // namespace RedeemMatchmakerTicketRequest
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_RulesFailedToRespond {
        namespace {
            app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class* type_info_ref = nullptr;
        }
        app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "RulesFailedToRespond");
        }
        inline app::ISteamMatchmakingRulesResponse_RulesFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_RulesFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_RulesFailedToRespond
} // namespace app::classes::types
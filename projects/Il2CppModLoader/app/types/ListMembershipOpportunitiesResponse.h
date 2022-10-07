#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMembershipOpportunitiesResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMembershipOpportunitiesResponse__Class** type_info;
        inline app::ListMembershipOpportunitiesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipOpportunitiesResponse__Class>(type_info, "PlayFab.GroupsModels", "ListMembershipOpportunitiesResponse");
        }
        inline app::ListMembershipOpportunitiesResponse* create() {
            return il2cpp::create_object<app::ListMembershipOpportunitiesResponse>(get_class());
        }
    } // namespace ListMembershipOpportunitiesResponse
} // namespace app::classes::types
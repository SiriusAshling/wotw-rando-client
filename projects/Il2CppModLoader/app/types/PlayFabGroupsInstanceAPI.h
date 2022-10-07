#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabGroupsInstanceAPI {
        namespace {
            app::PlayFabGroupsInstanceAPI__Class* type_info_ref = nullptr;
        }
        app::PlayFabGroupsInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabGroupsInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabGroupsInstanceAPI__Class>(type_info, "PlayFab", "PlayFabGroupsInstanceAPI");
        }
        inline app::PlayFabGroupsInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabGroupsInstanceAPI>(get_class());
        }
    } // namespace PlayFabGroupsInstanceAPI
} // namespace app::classes::types
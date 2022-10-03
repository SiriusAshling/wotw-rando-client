#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamPlayFabIdPair__Array {
        namespace {
            app::SteamPlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        app::SteamPlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::SteamPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::SteamPlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "SteamPlayFabIdPair[]");
        }
        inline app::SteamPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::SteamPlayFabIdPair__Array>(get_class());
        }
    } // namespace SteamPlayFabIdPair__Array
} // namespace app::classes::types

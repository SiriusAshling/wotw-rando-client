#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamPartyBeaconLocation_t__Array {
        namespace {
            app::SteamPartyBeaconLocation_t__Array__Class* type_info_ref = nullptr;
        }
        app::SteamPartyBeaconLocation_t__Array__Class** type_info = &type_info_ref;
        inline app::SteamPartyBeaconLocation_t__Array__Class* get_class() {
            return il2cpp::get_class<app::SteamPartyBeaconLocation_t__Array__Class>(type_info, "Steamworks", "SteamPartyBeaconLocation_t[]");
        }
        inline app::SteamPartyBeaconLocation_t__Array* create() {
            return il2cpp::create_object<app::SteamPartyBeaconLocation_t__Array>(get_class());
        }
    } // namespace SteamPartyBeaconLocation_t__Array
} // namespace app::classes::types
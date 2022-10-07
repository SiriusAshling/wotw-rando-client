#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamAppInstalled_t {
        namespace {
            app::SteamAppInstalled_t__Class* type_info_ref = nullptr;
        }
        app::SteamAppInstalled_t__Class** type_info = &type_info_ref;
        inline app::SteamAppInstalled_t__Class* get_class() {
            return il2cpp::get_class<app::SteamAppInstalled_t__Class>(type_info, "Steamworks", "SteamAppInstalled_t");
        }
        inline app::SteamAppInstalled_t* create() {
            return il2cpp::create_object<app::SteamAppInstalled_t>(get_class());
        }
        inline app::SteamAppInstalled_t__Boxed* box(app::SteamAppInstalled_t value) {
            return il2cpp::box_value<app::SteamAppInstalled_t__Boxed>(get_class(), value);
        }
    } // namespace SteamAppInstalled_t
} // namespace app::classes::types
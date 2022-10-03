#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamAppUninstalled_t {
        namespace {
            app::SteamAppUninstalled_t__Class* type_info_ref = nullptr;
        }
        app::SteamAppUninstalled_t__Class** type_info = &type_info_ref;
        inline app::SteamAppUninstalled_t__Class* get_class() {
            return il2cpp::get_class<app::SteamAppUninstalled_t__Class>(type_info, "Steamworks", "SteamAppUninstalled_t");
        }
        inline app::SteamAppUninstalled_t* create() {
            return il2cpp::create_object<app::SteamAppUninstalled_t>(get_class());
        }
        inline app::SteamAppUninstalled_t__Boxed* box(app::SteamAppUninstalled_t value) {
            return il2cpp::box_value<app::SteamAppUninstalled_t__Boxed>(get_class(), value);
        }
    } // namespace SteamAppUninstalled_t
} // namespace app::classes::types

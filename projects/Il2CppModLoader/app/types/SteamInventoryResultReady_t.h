#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryResultReady_t {
        namespace {
            app::SteamInventoryResultReady_t__Class* type_info_ref = nullptr;
        }
        app::SteamInventoryResultReady_t__Class** type_info = &type_info_ref;
        inline app::SteamInventoryResultReady_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryResultReady_t__Class>(type_info, "Steamworks", "SteamInventoryResultReady_t");
        }
        inline app::SteamInventoryResultReady_t* create() {
            return il2cpp::create_object<app::SteamInventoryResultReady_t>(get_class());
        }
        inline app::SteamInventoryResultReady_t__Boxed* box(app::SteamInventoryResultReady_t value) {
            return il2cpp::box_value<app::SteamInventoryResultReady_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryResultReady_t
} // namespace app::classes::types
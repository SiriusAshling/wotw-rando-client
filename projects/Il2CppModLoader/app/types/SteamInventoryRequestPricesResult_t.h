#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryRequestPricesResult_t {
        namespace {
            app::SteamInventoryRequestPricesResult_t__Class* type_info_ref = nullptr;
        }
        app::SteamInventoryRequestPricesResult_t__Class** type_info = &type_info_ref;
        inline app::SteamInventoryRequestPricesResult_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryRequestPricesResult_t__Class>(type_info, "Steamworks", "SteamInventoryRequestPricesResult_t");
        }
        inline app::SteamInventoryRequestPricesResult_t* create() {
            return il2cpp::create_object<app::SteamInventoryRequestPricesResult_t>(get_class());
        }
        inline app::SteamInventoryRequestPricesResult_t__Boxed* box(app::SteamInventoryRequestPricesResult_t value) {
            return il2cpp::box_value<app::SteamInventoryRequestPricesResult_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryRequestPricesResult_t
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryStartPurchaseResult_t {
        namespace {
            app::SteamInventoryStartPurchaseResult_t__Class* type_info_ref = nullptr;
        }
        app::SteamInventoryStartPurchaseResult_t__Class** type_info = &type_info_ref;
        inline app::SteamInventoryStartPurchaseResult_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryStartPurchaseResult_t__Class>(type_info, "Steamworks", "SteamInventoryStartPurchaseResult_t");
        }
        inline app::SteamInventoryStartPurchaseResult_t* create() {
            return il2cpp::create_object<app::SteamInventoryStartPurchaseResult_t>(get_class());
        }
        inline app::SteamInventoryStartPurchaseResult_t__Boxed* box(app::SteamInventoryStartPurchaseResult_t value) {
            return il2cpp::box_value<app::SteamInventoryStartPurchaseResult_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryStartPurchaseResult_t
} // namespace app::classes::types

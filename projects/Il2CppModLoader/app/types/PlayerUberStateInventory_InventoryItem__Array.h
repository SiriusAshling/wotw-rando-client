#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_InventoryItem__Array {
        namespace {
            app::PlayerUberStateInventory_InventoryItem__Array__Class* type_info_ref = nullptr;
        }
        app::PlayerUberStateInventory_InventoryItem__Array__Class** type_info = &type_info_ref;
        inline app::PlayerUberStateInventory_InventoryItem__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateInventory_InventoryItem__Array__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateInventory+InventoryItem[]");
        }
        inline app::PlayerUberStateInventory_InventoryItem__Array* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory_InventoryItem__Array>(get_class());
        }
    } // namespace PlayerUberStateInventory_InventoryItem__Array
} // namespace app::classes::types
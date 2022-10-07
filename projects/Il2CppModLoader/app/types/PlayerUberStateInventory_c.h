#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateInventory_c__Class** type_info;
        inline app::PlayerUberStateInventory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateInventory_c__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateInventory", "<>c");
        }
        inline app::PlayerUberStateInventory_c* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory_c>(get_class());
        }
    } // namespace PlayerUberStateInventory_c
} // namespace app::classes::types
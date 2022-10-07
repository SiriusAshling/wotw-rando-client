#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperScreen {
        namespace {
            app::ShopkeeperScreen__Class* type_info_ref = nullptr;
        }
        app::ShopkeeperScreen__Class** type_info = &type_info_ref;
        inline app::ShopkeeperScreen__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperScreen__Class>(type_info, "", "ShopkeeperScreen");
        }
        inline app::ShopkeeperScreen* create() {
            return il2cpp::create_object<app::ShopkeeperScreen>(get_class());
        }
    } // namespace ShopkeeperScreen
} // namespace app::classes::types
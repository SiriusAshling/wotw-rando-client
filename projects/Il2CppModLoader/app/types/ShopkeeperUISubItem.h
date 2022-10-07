#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperUISubItem {
        namespace {
            app::ShopkeeperUISubItem__Class* type_info_ref = nullptr;
        }
        app::ShopkeeperUISubItem__Class** type_info = &type_info_ref;
        inline app::ShopkeeperUISubItem__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperUISubItem__Class>(type_info, "", "ShopkeeperUISubItem");
        }
        inline app::ShopkeeperUISubItem* create() {
            return il2cpp::create_object<app::ShopkeeperUISubItem>(get_class());
        }
    } // namespace ShopkeeperUISubItem
} // namespace app::classes::types
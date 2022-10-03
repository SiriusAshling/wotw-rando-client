#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUIItem {
        namespace {
            app::SpiritShardShopUIItem__Class* type_info_ref = nullptr;
        }
        app::SpiritShardShopUIItem__Class** type_info = &type_info_ref;
        inline app::SpiritShardShopUIItem__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardShopUIItem__Class>(type_info, "", "SpiritShardShopUIItem");
        }
        inline app::SpiritShardShopUIItem* create() {
            return il2cpp::create_object<app::SpiritShardShopUIItem>(get_class());
        }
    } // namespace SpiritShardShopUIItem
} // namespace app::classes::types

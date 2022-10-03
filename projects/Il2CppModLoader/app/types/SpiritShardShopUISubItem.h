#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUISubItem {
        namespace {
            app::SpiritShardShopUISubItem__Class* type_info_ref = nullptr;
        }
        app::SpiritShardShopUISubItem__Class** type_info = &type_info_ref;
        inline app::SpiritShardShopUISubItem__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardShopUISubItem__Class>(type_info, "", "SpiritShardShopUISubItem");
        }
        inline app::SpiritShardShopUISubItem* create() {
            return il2cpp::create_object<app::SpiritShardShopUISubItem>(get_class());
        }
    } // namespace SpiritShardShopUISubItem
} // namespace app::classes::types

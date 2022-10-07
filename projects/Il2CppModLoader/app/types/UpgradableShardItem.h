#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradableShardItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpgradableShardItem__Class** type_info;
        inline app::UpgradableShardItem__Class* get_class() {
            return il2cpp::get_class<app::UpgradableShardItem__Class>(type_info, "", "UpgradableShardItem");
        }
        inline app::UpgradableShardItem* create() {
            return il2cpp::create_object<app::UpgradableShardItem>(get_class());
        }
        inline app::UpgradableShardItem__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradableShardItem__Array>(get_class(), size);
        }
        inline app::UpgradableShardItem__Array* create_array(const std::vector<app::UpgradableShardItem*>& items) {
            return il2cpp::array_new<app::UpgradableShardItem__Array>(get_class(), items);
        }
    } // namespace UpgradableShardItem
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyManager_SpawnInfo__Array {
        namespace {
            app::LegacySwarmEnemyManager_SpawnInfo__Array__Class* type_info_ref = nullptr;
        }
        app::LegacySwarmEnemyManager_SpawnInfo__Array__Class** type_info = &type_info_ref;
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyManager_SpawnInfo__Array__Class>(type_info, "", "LegacySwarmEnemyManager+SpawnInfo[]");
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyManager_SpawnInfo__Array>(get_class());
        }
    } // namespace LegacySwarmEnemyManager_SpawnInfo__Array
} // namespace app::classes::types

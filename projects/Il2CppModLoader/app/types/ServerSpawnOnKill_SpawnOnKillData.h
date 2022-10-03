#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerSpawnOnKill_SpawnOnKillData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerSpawnOnKill_SpawnOnKillData__Class** type_info;
        inline app::ServerSpawnOnKill_SpawnOnKillData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerSpawnOnKill_SpawnOnKillData__Class>(type_info, "", "ServerSpawnOnKill", "SpawnOnKillData");
        }
        inline app::ServerSpawnOnKill_SpawnOnKillData* create() {
            return il2cpp::create_object<app::ServerSpawnOnKill_SpawnOnKillData>(get_class());
        }
        inline app::ServerSpawnOnKill_SpawnOnKillData__Boxed* box(app::ServerSpawnOnKill_SpawnOnKillData value) {
            return il2cpp::box_value<app::ServerSpawnOnKill_SpawnOnKillData__Boxed>(get_class(), value);
        }
    } // namespace ServerSpawnOnKill_SpawnOnKillData
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceDataCache_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceDataCache_c__Class** type_info;
        inline app::RaceDataCache_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceDataCache_c__Class>(type_info, "SystemIntegration.Races", "RaceDataCache", "<>c");
        }
        inline app::RaceDataCache_c* create() {
            return il2cpp::create_object<app::RaceDataCache_c>(get_class());
        }
    } // namespace RaceDataCache_c
} // namespace app::classes::types

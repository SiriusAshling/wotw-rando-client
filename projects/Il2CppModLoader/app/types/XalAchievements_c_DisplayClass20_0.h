#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalAchievements_c_DisplayClass20_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalAchievements_c_DisplayClass20_0__Class** type_info;
        inline app::XalAchievements_c_DisplayClass20_0__Class* get_class() {
            return il2cpp::get_nested_class<app::XalAchievements_c_DisplayClass20_0__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XalAchievements", "<>c__DisplayClass20_0");
        }
        inline app::XalAchievements_c_DisplayClass20_0* create() {
            return il2cpp::create_object<app::XalAchievements_c_DisplayClass20_0>(get_class());
        }
    } // namespace XalAchievements_c_DisplayClass20_0
} // namespace app::classes::types

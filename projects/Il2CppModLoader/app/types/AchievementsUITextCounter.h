#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementsUITextCounter {
        namespace {
            app::AchievementsUITextCounter__Class* type_info_ref = nullptr;
        }
        app::AchievementsUITextCounter__Class** type_info = &type_info_ref;
        inline app::AchievementsUITextCounter__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUITextCounter__Class>(type_info, "", "AchievementsUITextCounter");
        }
        inline app::AchievementsUITextCounter* create() {
            return il2cpp::create_object<app::AchievementsUITextCounter>(get_class());
        }
    } // namespace AchievementsUITextCounter
} // namespace app::classes::types
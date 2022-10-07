#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowAchievementsAction {
        namespace {
            app::ShowAchievementsAction__Class* type_info_ref = nullptr;
        }
        app::ShowAchievementsAction__Class** type_info = &type_info_ref;
        inline app::ShowAchievementsAction__Class* get_class() {
            return il2cpp::get_class<app::ShowAchievementsAction__Class>(type_info, "", "ShowAchievementsAction");
        }
        inline app::ShowAchievementsAction* create() {
            return il2cpp::create_object<app::ShowAchievementsAction>(get_class());
        }
    } // namespace ShowAchievementsAction
} // namespace app::classes::types
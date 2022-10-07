#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementAsset {
        namespace {
            app::AchievementAsset__Class* type_info_ref = nullptr;
        }
        app::AchievementAsset__Class** type_info = &type_info_ref;
        inline app::AchievementAsset__Class* get_class() {
            return il2cpp::get_class<app::AchievementAsset__Class>(type_info, "", "AchievementAsset");
        }
        inline app::AchievementAsset* create() {
            return il2cpp::create_object<app::AchievementAsset>(get_class());
        }
        inline app::AchievementAsset__Array* create_array(int size) {
            return il2cpp::array_new<app::AchievementAsset__Array>(get_class(), size);
        }
        inline app::AchievementAsset__Array* create_array(const std::vector<app::AchievementAsset*>& items) {
            return il2cpp::array_new<app::AchievementAsset__Array>(get_class(), items);
        }
    } // namespace AchievementAsset
} // namespace app::classes::types
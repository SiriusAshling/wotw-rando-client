#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserAchievementStored_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserAchievementStored_t__Class** type_info;
        inline app::UserAchievementStored_t__Class* get_class() {
            return il2cpp::get_class<app::UserAchievementStored_t__Class>(type_info, "Steamworks", "UserAchievementStored_t");
        }
        inline app::UserAchievementStored_t* create() {
            return il2cpp::create_object<app::UserAchievementStored_t>(get_class());
        }
        inline app::UserAchievementStored_t__Boxed* box(app::UserAchievementStored_t value) {
            return il2cpp::box_value<app::UserAchievementStored_t__Boxed>(get_class(), value);
        }
    } // namespace UserAchievementStored_t
} // namespace app::classes::types
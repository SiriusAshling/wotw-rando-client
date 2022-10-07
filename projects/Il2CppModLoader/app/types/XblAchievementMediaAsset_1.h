#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementMediaAsset_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementMediaAsset_1__Class** type_info;
        inline app::XblAchievementMediaAsset_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementMediaAsset_1__Class>(type_info, "XGamingRuntime.Interop", "XblAchievementMediaAsset");
        }
        inline app::XblAchievementMediaAsset_1* create() {
            return il2cpp::create_object<app::XblAchievementMediaAsset_1>(get_class());
        }
        inline app::XblAchievementMediaAsset_1__Boxed* box(app::XblAchievementMediaAsset_1 value) {
            return il2cpp::box_value<app::XblAchievementMediaAsset_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementMediaAsset_1
} // namespace app::classes::types
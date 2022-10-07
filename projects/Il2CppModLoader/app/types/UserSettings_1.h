#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserSettings_1 {
        namespace {
            app::UserSettings_1__Class* type_info_ref = nullptr;
        }
        app::UserSettings_1__Class** type_info = &type_info_ref;
        inline app::UserSettings_1__Class* get_class() {
            return il2cpp::get_class<app::UserSettings_1__Class>(type_info, "PlayFab.ServerModels", "UserSettings");
        }
        inline app::UserSettings_1* create() {
            return il2cpp::create_object<app::UserSettings_1>(get_class());
        }
    } // namespace UserSettings_1
} // namespace app::classes::types
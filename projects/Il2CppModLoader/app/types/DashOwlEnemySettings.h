#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemySettings {
        namespace {
            app::DashOwlEnemySettings__Class* type_info_ref = nullptr;
        }
        app::DashOwlEnemySettings__Class** type_info = &type_info_ref;
        inline app::DashOwlEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemySettings__Class>(type_info, "", "DashOwlEnemySettings");
        }
        inline app::DashOwlEnemySettings* create() {
            return il2cpp::create_object<app::DashOwlEnemySettings>(get_class());
        }
    } // namespace DashOwlEnemySettings
} // namespace app::classes::types

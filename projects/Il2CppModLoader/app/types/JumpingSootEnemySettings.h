#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpingSootEnemySettings {
        namespace {
            app::JumpingSootEnemySettings__Class* type_info_ref = nullptr;
        }
        app::JumpingSootEnemySettings__Class** type_info = &type_info_ref;
        inline app::JumpingSootEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::JumpingSootEnemySettings__Class>(type_info, "", "JumpingSootEnemySettings");
        }
        inline app::JumpingSootEnemySettings* create() {
            return il2cpp::create_object<app::JumpingSootEnemySettings>(get_class());
        }
    } // namespace JumpingSootEnemySettings
} // namespace app::classes::types

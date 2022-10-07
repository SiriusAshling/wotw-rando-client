#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings {
        namespace {
            app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class>(type_info, "", "JumperEnemyPlaceholder", "JumpingSootEnemyPlaceholderSettings");
        }
        inline app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings>(get_class());
        }
    } // namespace JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings
} // namespace app::classes::types
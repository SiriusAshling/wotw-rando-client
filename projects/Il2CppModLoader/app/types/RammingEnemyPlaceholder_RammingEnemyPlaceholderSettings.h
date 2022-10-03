#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings {
        namespace {
            app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class>(type_info, "", "RammingEnemyPlaceholder", "RammingEnemyPlaceholderSettings");
        }
        inline app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings>(get_class());
        }
    } // namespace RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings
} // namespace app::classes::types

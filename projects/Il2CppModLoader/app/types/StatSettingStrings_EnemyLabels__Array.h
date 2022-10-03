#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatSettingStrings_EnemyLabels__Array {
        namespace {
            app::StatSettingStrings_EnemyLabels__Array__Class* type_info_ref = nullptr;
        }
        app::StatSettingStrings_EnemyLabels__Array__Class** type_info = &type_info_ref;
        inline app::StatSettingStrings_EnemyLabels__Array__Class* get_class() {
            return il2cpp::get_class<app::StatSettingStrings_EnemyLabels__Array__Class>(type_info, "", "StatSettingStrings+EnemyLabels[]");
        }
        inline app::StatSettingStrings_EnemyLabels__Array* create() {
            return il2cpp::create_object<app::StatSettingStrings_EnemyLabels__Array>(get_class());
        }
    } // namespace StatSettingStrings_EnemyLabels__Array
} // namespace app::classes::types

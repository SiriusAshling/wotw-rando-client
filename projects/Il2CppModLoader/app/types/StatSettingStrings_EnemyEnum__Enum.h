#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatSettingStrings_EnemyEnum__Enum {
        namespace {
            app::StatSettingStrings_EnemyEnum__Enum__Class* type_info_ref = nullptr;
        }
        app::StatSettingStrings_EnemyEnum__Enum__Class** type_info = &type_info_ref;
        inline app::StatSettingStrings_EnemyEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSettingStrings_EnemyEnum__Enum__Class>(type_info, "", "StatSettingStrings", "EnemyEnum");
        }
        inline app::StatSettingStrings_EnemyEnum__Enum* create() {
            return il2cpp::create_object<app::StatSettingStrings_EnemyEnum__Enum>(get_class());
        }
    } // namespace StatSettingStrings_EnemyEnum__Enum
} // namespace app::classes::types

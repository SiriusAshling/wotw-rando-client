#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyState {
        namespace {
            app::RockyEnemyState__Class* type_info_ref = nullptr;
        }
        app::RockyEnemyState__Class** type_info = &type_info_ref;
        inline app::RockyEnemyState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyState__Class>(type_info, "", "RockyEnemyState");
        }
        inline app::RockyEnemyState* create() {
            return il2cpp::create_object<app::RockyEnemyState>(get_class());
        }
    } // namespace RockyEnemyState
} // namespace app::classes::types

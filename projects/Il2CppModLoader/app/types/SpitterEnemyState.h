#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyState {
        namespace {
            app::SpitterEnemyState__Class* type_info_ref = nullptr;
        }
        app::SpitterEnemyState__Class** type_info = &type_info_ref;
        inline app::SpitterEnemyState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyState__Class>(type_info, "", "SpitterEnemyState");
        }
        inline app::SpitterEnemyState* create() {
            return il2cpp::create_object<app::SpitterEnemyState>(get_class());
        }
    } // namespace SpitterEnemyState
} // namespace app::classes::types
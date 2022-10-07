#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeadBatEnemy {
        namespace {
            app::DeadBatEnemy__Class* type_info_ref = nullptr;
        }
        app::DeadBatEnemy__Class** type_info = &type_info_ref;
        inline app::DeadBatEnemy__Class* get_class() {
            return il2cpp::get_class<app::DeadBatEnemy__Class>(type_info, "", "DeadBatEnemy");
        }
        inline app::DeadBatEnemy* create() {
            return il2cpp::create_object<app::DeadBatEnemy>(get_class());
        }
    } // namespace DeadBatEnemy
} // namespace app::classes::types
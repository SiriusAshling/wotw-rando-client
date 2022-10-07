#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemyAnimations {
        namespace {
            app::FloatingRockLaserEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::FloatingRockLaserEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::FloatingRockLaserEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemyAnimations__Class>(type_info, "", "FloatingRockLaserEnemyAnimations");
        }
        inline app::FloatingRockLaserEnemyAnimations* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemyAnimations>(get_class());
        }
    } // namespace FloatingRockLaserEnemyAnimations
} // namespace app::classes::types
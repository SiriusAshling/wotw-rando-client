#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterShieldAttackBehaviour {
        namespace {
            app::LaserShooterShieldAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::LaserShooterShieldAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterShieldAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterShieldAttackBehaviour__Class>(type_info, "", "LaserShooterShieldAttackBehaviour");
        }
        inline app::LaserShooterShieldAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterShieldAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterShieldAttackBehaviour
} // namespace app::classes::types
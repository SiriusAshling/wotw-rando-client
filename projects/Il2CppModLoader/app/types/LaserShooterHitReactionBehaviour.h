#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterHitReactionBehaviour {
        namespace {
            app::LaserShooterHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::LaserShooterHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterHitReactionBehaviour__Class>(type_info, "", "LaserShooterHitReactionBehaviour");
        }
        inline app::LaserShooterHitReactionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterHitReactionBehaviour>(get_class());
        }
    } // namespace LaserShooterHitReactionBehaviour
} // namespace app::classes::types
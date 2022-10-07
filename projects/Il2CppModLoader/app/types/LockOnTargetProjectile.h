#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LockOnTargetProjectile {
        namespace {
            app::LockOnTargetProjectile__Class* type_info_ref = nullptr;
        }
        app::LockOnTargetProjectile__Class** type_info = &type_info_ref;
        inline app::LockOnTargetProjectile__Class* get_class() {
            return il2cpp::get_class<app::LockOnTargetProjectile__Class>(type_info, "", "LockOnTargetProjectile");
        }
        inline app::LockOnTargetProjectile* create() {
            return il2cpp::create_object<app::LockOnTargetProjectile>(get_class());
        }
    } // namespace LockOnTargetProjectile
} // namespace app::classes::types
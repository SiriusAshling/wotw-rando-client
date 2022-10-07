#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HomingProjectile {
        namespace {
            app::HomingProjectile__Class* type_info_ref = nullptr;
        }
        app::HomingProjectile__Class** type_info = &type_info_ref;
        inline app::HomingProjectile__Class* get_class() {
            return il2cpp::get_class<app::HomingProjectile__Class>(type_info, "", "HomingProjectile");
        }
        inline app::HomingProjectile* create() {
            return il2cpp::create_object<app::HomingProjectile>(get_class());
        }
    } // namespace HomingProjectile
} // namespace app::classes::types
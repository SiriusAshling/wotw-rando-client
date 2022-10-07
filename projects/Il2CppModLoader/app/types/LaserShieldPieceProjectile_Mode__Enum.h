#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShieldPieceProjectile_Mode__Enum {
        namespace {
            app::LaserShieldPieceProjectile_Mode__Enum__Class* type_info_ref = nullptr;
        }
        app::LaserShieldPieceProjectile_Mode__Enum__Class** type_info = &type_info_ref;
        inline app::LaserShieldPieceProjectile_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShieldPieceProjectile_Mode__Enum__Class>(type_info, "", "LaserShieldPieceProjectile", "Mode");
        }
        inline app::LaserShieldPieceProjectile_Mode__Enum* create() {
            return il2cpp::create_object<app::LaserShieldPieceProjectile_Mode__Enum>(get_class());
        }
    } // namespace LaserShieldPieceProjectile_Mode__Enum
} // namespace app::classes::types
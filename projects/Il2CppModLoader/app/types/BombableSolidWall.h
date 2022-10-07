#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BombableSolidWall {
        namespace {
            app::BombableSolidWall__Class* type_info_ref = nullptr;
        }
        app::BombableSolidWall__Class** type_info = &type_info_ref;
        inline app::BombableSolidWall__Class* get_class() {
            return il2cpp::get_class<app::BombableSolidWall__Class>(type_info, "", "BombableSolidWall");
        }
        inline app::BombableSolidWall* create() {
            return il2cpp::create_object<app::BombableSolidWall>(get_class());
        }
    } // namespace BombableSolidWall
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritTurret_AttackableRayHandle__Array {
        namespace {
            app::SpiritTurret_AttackableRayHandle__Array__Class* type_info_ref = nullptr;
        }
        app::SpiritTurret_AttackableRayHandle__Array__Class** type_info = &type_info_ref;
        inline app::SpiritTurret_AttackableRayHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritTurret_AttackableRayHandle__Array__Class>(type_info, "", "SpiritTurret+AttackableRayHandle[]");
        }
        inline app::SpiritTurret_AttackableRayHandle__Array* create() {
            return il2cpp::create_object<app::SpiritTurret_AttackableRayHandle__Array>(get_class());
        }
    } // namespace SpiritTurret_AttackableRayHandle__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleStabBehaviour_TentacleAttack__Array {
        namespace {
            app::TentacleStabBehaviour_TentacleAttack__Array__Class* type_info_ref = nullptr;
        }
        app::TentacleStabBehaviour_TentacleAttack__Array__Class** type_info = &type_info_ref;
        inline app::TentacleStabBehaviour_TentacleAttack__Array__Class* get_class() {
            return il2cpp::get_class<app::TentacleStabBehaviour_TentacleAttack__Array__Class>(type_info, "Moon", "TentacleStabBehaviour+TentacleAttack[]");
        }
        inline app::TentacleStabBehaviour_TentacleAttack__Array* create() {
            return il2cpp::create_object<app::TentacleStabBehaviour_TentacleAttack__Array>(get_class());
        }
    } // namespace TentacleStabBehaviour_TentacleAttack__Array
} // namespace app::classes::types

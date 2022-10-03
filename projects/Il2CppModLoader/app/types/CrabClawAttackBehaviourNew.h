#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabClawAttackBehaviourNew {
        namespace {
            app::CrabClawAttackBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::CrabClawAttackBehaviourNew__Class** type_info = &type_info_ref;
        inline app::CrabClawAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::CrabClawAttackBehaviourNew__Class>(type_info, "Moon", "CrabClawAttackBehaviourNew");
        }
        inline app::CrabClawAttackBehaviourNew* create() {
            return il2cpp::create_object<app::CrabClawAttackBehaviourNew>(get_class());
        }
    } // namespace CrabClawAttackBehaviourNew
} // namespace app::classes::types

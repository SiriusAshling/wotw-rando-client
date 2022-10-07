#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundAreaPatrolBehaviourNew {
        namespace {
            app::GroundAreaPatrolBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::GroundAreaPatrolBehaviourNew__Class** type_info = &type_info_ref;
        inline app::GroundAreaPatrolBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundAreaPatrolBehaviourNew__Class>(type_info, "Moon", "GroundAreaPatrolBehaviourNew");
        }
        inline app::GroundAreaPatrolBehaviourNew* create() {
            return il2cpp::create_object<app::GroundAreaPatrolBehaviourNew>(get_class());
        }
    } // namespace GroundAreaPatrolBehaviourNew
} // namespace app::classes::types
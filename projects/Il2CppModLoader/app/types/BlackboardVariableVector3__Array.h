#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableVector3__Array {
        namespace {
            app::BlackboardVariableVector3__Array__Class* type_info_ref = nullptr;
        }
        app::BlackboardVariableVector3__Array__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableVector3__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableVector3__Array__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableVector3[]");
        }
        inline app::BlackboardVariableVector3__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableVector3__Array>(get_class());
        }
    } // namespace BlackboardVariableVector3__Array
} // namespace app::classes::types
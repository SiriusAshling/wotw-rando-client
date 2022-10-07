#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableObject {
        namespace {
            app::BlackboardVariableObject__Class* type_info_ref = nullptr;
        }
        app::BlackboardVariableObject__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableObject__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableObject__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableObject");
        }
        inline app::BlackboardVariableObject* create() {
            return il2cpp::create_object<app::BlackboardVariableObject>(get_class());
        }
        inline app::BlackboardVariableObject__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariableObject__Array>(get_class(), size);
        }
        inline app::BlackboardVariableObject__Array* create_array(const std::vector<app::BlackboardVariableObject*>& items) {
            return il2cpp::array_new<app::BlackboardVariableObject__Array>(get_class(), items);
        }
    } // namespace BlackboardVariableObject
} // namespace app::classes::types
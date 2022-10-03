#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariable {
        namespace {
            app::BlackboardVariable__Class* type_info_ref = nullptr;
        }
        app::BlackboardVariable__Class** type_info = &type_info_ref;
        inline app::BlackboardVariable__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariable__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariable");
        }
        inline app::BlackboardVariable* create() {
            return il2cpp::create_object<app::BlackboardVariable>(get_class());
        }
        inline app::BlackboardVariable__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariable__Array>(get_class(), size);
        }
    } // namespace BlackboardVariable
} // namespace app::classes::types

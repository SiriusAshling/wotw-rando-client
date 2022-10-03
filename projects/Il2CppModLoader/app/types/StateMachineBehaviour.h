#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviour {
        namespace {
            app::StateMachineBehaviour__Class* type_info_ref = nullptr;
        }
        app::StateMachineBehaviour__Class** type_info = &type_info_ref;
        inline app::StateMachineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StateMachineBehaviour__Class>(type_info, "UnityEngine", "StateMachineBehaviour");
        }
        inline app::StateMachineBehaviour* create() {
            return il2cpp::create_object<app::StateMachineBehaviour>(get_class());
        }
        inline app::StateMachineBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::StateMachineBehaviour__Array>(get_class(), size);
        }
    } // namespace StateMachineBehaviour
} // namespace app::classes::types

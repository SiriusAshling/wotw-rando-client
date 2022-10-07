#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDamageInterruptionBlockingTask__Array {
        namespace {
            app::IDamageInterruptionBlockingTask__Array__Class* type_info_ref = nullptr;
        }
        app::IDamageInterruptionBlockingTask__Array__Class** type_info = &type_info_ref;
        inline app::IDamageInterruptionBlockingTask__Array__Class* get_class() {
            return il2cpp::get_class<app::IDamageInterruptionBlockingTask__Array__Class>(type_info, "Moon.BehaviourSystem", "IDamageInterruptionBlockingTask[]");
        }
        inline app::IDamageInterruptionBlockingTask__Array* create() {
            return il2cpp::create_object<app::IDamageInterruptionBlockingTask__Array>(get_class());
        }
    } // namespace IDamageInterruptionBlockingTask__Array
} // namespace app::classes::types
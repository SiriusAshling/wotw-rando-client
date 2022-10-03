#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionSequence__Array {
        namespace {
            app::ActionSequence__Array__Class* type_info_ref = nullptr;
        }
        app::ActionSequence__Array__Class** type_info = &type_info_ref;
        inline app::ActionSequence__Array__Class* get_class() {
            return il2cpp::get_class<app::ActionSequence__Array__Class>(type_info, "", "ActionSequence[]");
        }
        inline app::ActionSequence__Array* create() {
            return il2cpp::create_object<app::ActionSequence__Array>(get_class());
        }
    } // namespace ActionSequence__Array
} // namespace app::classes::types

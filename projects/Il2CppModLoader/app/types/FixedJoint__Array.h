#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedJoint__Array {
        namespace {
            app::FixedJoint__Array__Class* type_info_ref = nullptr;
        }
        app::FixedJoint__Array__Class** type_info = &type_info_ref;
        inline app::FixedJoint__Array__Class* get_class() {
            return il2cpp::get_class<app::FixedJoint__Array__Class>(type_info, "UnityEngine", "FixedJoint[]");
        }
        inline app::FixedJoint__Array* create() {
            return il2cpp::create_object<app::FixedJoint__Array>(get_class());
        }
    } // namespace FixedJoint__Array
} // namespace app::classes::types
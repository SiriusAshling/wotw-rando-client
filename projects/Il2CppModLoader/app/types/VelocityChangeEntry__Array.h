#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VelocityChangeEntry__Array {
        namespace {
            app::VelocityChangeEntry__Array__Class* type_info_ref = nullptr;
        }
        app::VelocityChangeEntry__Array__Class** type_info = &type_info_ref;
        inline app::VelocityChangeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::VelocityChangeEntry__Array__Class>(type_info, "PhysicsDebugTools", "VelocityChangeEntry[]");
        }
        inline app::VelocityChangeEntry__Array* create() {
            return il2cpp::create_object<app::VelocityChangeEntry__Array>(get_class());
        }
    } // namespace VelocityChangeEntry__Array
} // namespace app::classes::types

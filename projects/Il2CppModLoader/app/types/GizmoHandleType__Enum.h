#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GizmoHandleType__Enum {
        namespace {
            app::GizmoHandleType__Enum__Class* type_info_ref = nullptr;
        }
        app::GizmoHandleType__Enum__Class** type_info = &type_info_ref;
        inline app::GizmoHandleType__Enum__Class* get_class() {
            return il2cpp::get_class<app::GizmoHandleType__Enum__Class>(type_info, "Moon", "GizmoHandleType");
        }
        inline app::GizmoHandleType__Enum* create() {
            return il2cpp::create_object<app::GizmoHandleType__Enum>(get_class());
        }
    } // namespace GizmoHandleType__Enum
} // namespace app::classes::types

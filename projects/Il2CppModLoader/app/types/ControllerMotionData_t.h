#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControllerMotionData_t {
        namespace {
            app::ControllerMotionData_t__Class* type_info_ref = nullptr;
        }
        app::ControllerMotionData_t__Class** type_info = &type_info_ref;
        inline app::ControllerMotionData_t__Class* get_class() {
            return il2cpp::get_class<app::ControllerMotionData_t__Class>(type_info, "Steamworks", "ControllerMotionData_t");
        }
        inline app::ControllerMotionData_t* create() {
            return il2cpp::create_object<app::ControllerMotionData_t>(get_class());
        }
        inline app::ControllerMotionData_t__Boxed* box(app::ControllerMotionData_t value) {
            return il2cpp::box_value<app::ControllerMotionData_t__Boxed>(get_class(), value);
        }
    } // namespace ControllerMotionData_t
} // namespace app::classes::types

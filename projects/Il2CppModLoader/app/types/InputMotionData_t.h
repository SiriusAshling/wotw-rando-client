#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputMotionData_t {
        namespace {
            app::InputMotionData_t__Class* type_info_ref = nullptr;
        }
        app::InputMotionData_t__Class** type_info = &type_info_ref;
        inline app::InputMotionData_t__Class* get_class() {
            return il2cpp::get_class<app::InputMotionData_t__Class>(type_info, "Steamworks", "InputMotionData_t");
        }
        inline app::InputMotionData_t* create() {
            return il2cpp::create_object<app::InputMotionData_t>(get_class());
        }
        inline app::InputMotionData_t__Boxed* box(app::InputMotionData_t value) {
            return il2cpp::box_value<app::InputMotionData_t__Boxed>(get_class(), value);
        }
    } // namespace InputMotionData_t
} // namespace app::classes::types

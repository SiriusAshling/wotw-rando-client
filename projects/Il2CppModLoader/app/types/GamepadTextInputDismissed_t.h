#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GamepadTextInputDismissed_t {
        namespace {
            app::GamepadTextInputDismissed_t__Class* type_info_ref = nullptr;
        }
        app::GamepadTextInputDismissed_t__Class** type_info = &type_info_ref;
        inline app::GamepadTextInputDismissed_t__Class* get_class() {
            return il2cpp::get_class<app::GamepadTextInputDismissed_t__Class>(type_info, "Steamworks", "GamepadTextInputDismissed_t");
        }
        inline app::GamepadTextInputDismissed_t* create() {
            return il2cpp::create_object<app::GamepadTextInputDismissed_t>(get_class());
        }
        inline app::GamepadTextInputDismissed_t__Boxed* box(app::GamepadTextInputDismissed_t value) {
            return il2cpp::box_value<app::GamepadTextInputDismissed_t__Boxed>(get_class(), value);
        }
    } // namespace GamepadTextInputDismissed_t
} // namespace app::classes::types
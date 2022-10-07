#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlUIItem__Array {
        namespace {
            app::ControlUIItem__Array__Class* type_info_ref = nullptr;
        }
        app::ControlUIItem__Array__Class** type_info = &type_info_ref;
        inline app::ControlUIItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ControlUIItem__Array__Class>(type_info, "", "ControlUIItem[]");
        }
        inline app::ControlUIItem__Array* create() {
            return il2cpp::create_object<app::ControlUIItem__Array>(get_class());
        }
    } // namespace ControlUIItem__Array
} // namespace app::classes::types
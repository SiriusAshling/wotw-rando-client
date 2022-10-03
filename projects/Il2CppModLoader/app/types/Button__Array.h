#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Button__Array {
        namespace {
            app::Button__Array__Class* type_info_ref = nullptr;
        }
        app::Button__Array__Class** type_info = &type_info_ref;
        inline app::Button__Array__Class* get_class() {
            return il2cpp::get_class<app::Button__Array__Class>(type_info, "UnityEngine.UI", "Button[]");
        }
        inline app::Button__Array* create() {
            return il2cpp::create_object<app::Button__Array>(get_class());
        }
    } // namespace Button__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Image__Array {
        namespace {
            app::Image__Array__Class* type_info_ref = nullptr;
        }
        app::Image__Array__Class** type_info = &type_info_ref;
        inline app::Image__Array__Class* get_class() {
            return il2cpp::get_class<app::Image__Array__Class>(type_info, "UnityEngine.UI", "Image[]");
        }
        inline app::Image__Array* create() {
            return il2cpp::create_object<app::Image__Array>(get_class());
        }
    } // namespace Image__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Touch {
        namespace {
            app::Touch__Class* type_info_ref = nullptr;
        }
        app::Touch__Class** type_info = &type_info_ref;
        inline app::Touch__Class* get_class() {
            return il2cpp::get_class<app::Touch__Class>(type_info, "UnityEngine", "Touch");
        }
        inline app::Touch* create() {
            return il2cpp::create_object<app::Touch>(get_class());
        }
        inline app::Touch__Boxed* box(app::Touch value) {
            return il2cpp::box_value<app::Touch__Boxed>(get_class(), value);
        }
    } // namespace Touch
} // namespace app::classes::types
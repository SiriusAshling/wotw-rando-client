#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LineDescent_1 {
        namespace {
            app::LineDescent_1__Class* type_info_ref = nullptr;
        }
        app::LineDescent_1__Class** type_info = &type_info_ref;
        inline app::LineDescent_1__Class* get_class() {
            return il2cpp::get_class<app::LineDescent_1__Class>(type_info, "Moon.UI", "LineDescent");
        }
        inline app::LineDescent_1* create() {
            return il2cpp::create_object<app::LineDescent_1>(get_class());
        }
        inline app::LineDescent_1__Boxed* box(app::LineDescent_1 value) {
            return il2cpp::box_value<app::LineDescent_1__Boxed>(get_class(), value);
        }
    } // namespace LineDescent_1
} // namespace app::classes::types

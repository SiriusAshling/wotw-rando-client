#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI_Field_1 {
        namespace {
            app::NavigableOnGUI_Field_1__Class* type_info_ref = nullptr;
        }
        app::NavigableOnGUI_Field_1__Class** type_info = &type_info_ref;
        inline app::NavigableOnGUI_Field_1__Class* get_class() {
            return il2cpp::get_nested_class<app::NavigableOnGUI_Field_1__Class>(type_info, "", "NavigableOnGUI", "Field");
        }
        inline app::NavigableOnGUI_Field_1* create() {
            return il2cpp::create_object<app::NavigableOnGUI_Field_1>(get_class());
        }
        inline app::NavigableOnGUI_Field_1__Boxed* box(app::NavigableOnGUI_Field_1 value) {
            return il2cpp::box_value<app::NavigableOnGUI_Field_1__Boxed>(get_class(), value);
        }
    } // namespace NavigableOnGUI_Field_1
} // namespace app::classes::types
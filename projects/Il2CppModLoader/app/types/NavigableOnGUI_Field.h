#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI_Field {
        namespace {
            app::NavigableOnGUI_Field__Class* type_info_ref = nullptr;
        }
        app::NavigableOnGUI_Field__Class** type_info = &type_info_ref;
        inline app::NavigableOnGUI_Field__Class* get_class() {
            return il2cpp::get_nested_class<app::NavigableOnGUI_Field__Class>(type_info, "Moon.UberStateVisualization", "NavigableOnGUI", "Field");
        }
        inline app::NavigableOnGUI_Field* create() {
            return il2cpp::create_object<app::NavigableOnGUI_Field>(get_class());
        }
        inline app::NavigableOnGUI_Field__Boxed* box(app::NavigableOnGUI_Field value) {
            return il2cpp::box_value<app::NavigableOnGUI_Field__Boxed>(get_class(), value);
        }
    } // namespace NavigableOnGUI_Field
} // namespace app::classes::types

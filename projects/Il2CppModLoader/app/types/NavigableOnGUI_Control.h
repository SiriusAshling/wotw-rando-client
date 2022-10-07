#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI_Control {
        namespace {
            app::NavigableOnGUI_Control__Class* type_info_ref = nullptr;
        }
        app::NavigableOnGUI_Control__Class** type_info = &type_info_ref;
        inline app::NavigableOnGUI_Control__Class* get_class() {
            return il2cpp::get_nested_class<app::NavigableOnGUI_Control__Class>(type_info, "Moon.UberStateVisualization", "NavigableOnGUI", "Control");
        }
        inline app::NavigableOnGUI_Control* create() {
            return il2cpp::create_object<app::NavigableOnGUI_Control>(get_class());
        }
        inline app::NavigableOnGUI_Control__Boxed* box(app::NavigableOnGUI_Control value) {
            return il2cpp::box_value<app::NavigableOnGUI_Control__Boxed>(get_class(), value);
        }
    } // namespace NavigableOnGUI_Control
} // namespace app::classes::types
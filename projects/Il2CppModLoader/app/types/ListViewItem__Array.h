#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListViewItem__Array {
        namespace {
            app::ListViewItem__Array__Class* type_info_ref = nullptr;
        }
        app::ListViewItem__Array__Class** type_info = &type_info_ref;
        inline app::ListViewItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ListViewItem__Array__Class>(type_info, "Moon.UberStateVisualization", "ListViewItem[]");
        }
        inline app::ListViewItem__Array* create() {
            return il2cpp::create_object<app::ListViewItem__Array>(get_class());
        }
    } // namespace ListViewItem__Array
} // namespace app::classes::types
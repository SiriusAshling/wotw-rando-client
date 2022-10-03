#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrayList_ArrayListDebugView {
        namespace {
            app::ArrayList_ArrayListDebugView__Class* type_info_ref = nullptr;
        }
        app::ArrayList_ArrayListDebugView__Class** type_info = &type_info_ref;
        inline app::ArrayList_ArrayListDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayList_ArrayListDebugView__Class>(type_info, "System.Collections", "ArrayList", "ArrayListDebugView");
        }
        inline app::ArrayList_ArrayListDebugView* create() {
            return il2cpp::create_object<app::ArrayList_ArrayListDebugView>(get_class());
        }
    } // namespace ArrayList_ArrayListDebugView
} // namespace app::classes::types

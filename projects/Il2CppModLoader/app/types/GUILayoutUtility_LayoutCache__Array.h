#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUILayoutUtility_LayoutCache__Array {
        namespace {
            app::GUILayoutUtility_LayoutCache__Array__Class* type_info_ref = nullptr;
        }
        app::GUILayoutUtility_LayoutCache__Array__Class** type_info = &type_info_ref;
        inline app::GUILayoutUtility_LayoutCache__Array__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutUtility_LayoutCache__Array__Class>(type_info, "UnityEngine", "GUILayoutUtility+LayoutCache[]");
        }
        inline app::GUILayoutUtility_LayoutCache__Array* create() {
            return il2cpp::create_object<app::GUILayoutUtility_LayoutCache__Array>(get_class());
        }
    } // namespace GUILayoutUtility_LayoutCache__Array
} // namespace app::classes::types

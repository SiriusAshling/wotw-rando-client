#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUILayout {
        namespace {
            app::GUILayout__Class* type_info_ref = nullptr;
        }
        app::GUILayout__Class** type_info = &type_info_ref;
        inline app::GUILayout__Class* get_class() {
            return il2cpp::get_class<app::GUILayout__Class>(type_info, "UnityEngine", "GUILayout");
        }
        inline app::GUILayout* create() {
            return il2cpp::create_object<app::GUILayout>(get_class());
        }
    } // namespace GUILayout
} // namespace app::classes::types
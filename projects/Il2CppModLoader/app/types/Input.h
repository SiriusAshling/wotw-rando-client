#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Input {
        namespace {
            app::Input__Class* type_info_ref = nullptr;
        }
        app::Input__Class** type_info = &type_info_ref;
        inline app::Input__Class* get_class() {
            return il2cpp::get_class<app::Input__Class>(type_info, "UnityEngine", "Input");
        }
        inline app::Input* create() {
            return il2cpp::create_object<app::Input>(get_class());
        }
    } // namespace Input
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Motion {
        namespace {
            app::Motion__Class* type_info_ref = nullptr;
        }
        app::Motion__Class** type_info = &type_info_ref;
        inline app::Motion__Class* get_class() {
            return il2cpp::get_class<app::Motion__Class>(type_info, "UnityEngine", "Motion");
        }
        inline app::Motion* create() {
            return il2cpp::create_object<app::Motion>(get_class());
        }
    } // namespace Motion
} // namespace app::classes::types
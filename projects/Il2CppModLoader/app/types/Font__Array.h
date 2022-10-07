#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Font__Array {
        namespace {
            app::Font__Array__Class* type_info_ref = nullptr;
        }
        app::Font__Array__Class** type_info = &type_info_ref;
        inline app::Font__Array__Class* get_class() {
            return il2cpp::get_class<app::Font__Array__Class>(type_info, "UnityEngine", "Font[]");
        }
        inline app::Font__Array* create() {
            return il2cpp::create_object<app::Font__Array>(get_class());
        }
    } // namespace Font__Array
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Cookie__Array {
        namespace {
            app::Cookie__Array__Class* type_info_ref = nullptr;
        }
        app::Cookie__Array__Class** type_info = &type_info_ref;
        inline app::Cookie__Array__Class* get_class() {
            return il2cpp::get_class<app::Cookie__Array__Class>(type_info, "System.Net", "Cookie[]");
        }
        inline app::Cookie__Array* create() {
            return il2cpp::create_object<app::Cookie__Array>(get_class());
        }
    } // namespace Cookie__Array
} // namespace app::classes::types
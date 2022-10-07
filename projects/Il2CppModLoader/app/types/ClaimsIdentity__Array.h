#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClaimsIdentity__Array {
        namespace {
            app::ClaimsIdentity__Array__Class* type_info_ref = nullptr;
        }
        app::ClaimsIdentity__Array__Class** type_info = &type_info_ref;
        inline app::ClaimsIdentity__Array__Class* get_class() {
            return il2cpp::get_class<app::ClaimsIdentity__Array__Class>(type_info, "System.Security.Claims", "ClaimsIdentity[]");
        }
        inline app::ClaimsIdentity__Array* create() {
            return il2cpp::create_object<app::ClaimsIdentity__Array>(get_class());
        }
    } // namespace ClaimsIdentity__Array
} // namespace app::classes::types
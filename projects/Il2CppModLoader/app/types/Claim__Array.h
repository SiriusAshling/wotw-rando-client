#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Claim__Array {
        namespace {
            app::Claim__Array__Class* type_info_ref = nullptr;
        }
        app::Claim__Array__Class** type_info = &type_info_ref;
        inline app::Claim__Array__Class* get_class() {
            return il2cpp::get_class<app::Claim__Array__Class>(type_info, "System.Security.Claims", "Claim[]");
        }
        inline app::Claim__Array* create() {
            return il2cpp::create_object<app::Claim__Array>(get_class());
        }
    } // namespace Claim__Array
} // namespace app::classes::types

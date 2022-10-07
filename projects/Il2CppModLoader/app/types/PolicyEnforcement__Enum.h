#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PolicyEnforcement__Enum {
        namespace {
            app::PolicyEnforcement__Enum__Class* type_info_ref = nullptr;
        }
        app::PolicyEnforcement__Enum__Class** type_info = &type_info_ref;
        inline app::PolicyEnforcement__Enum__Class* get_class() {
            return il2cpp::get_class<app::PolicyEnforcement__Enum__Class>(type_info, "System.Security.Authentication.ExtendedProtection", "PolicyEnforcement");
        }
        inline app::PolicyEnforcement__Enum* create() {
            return il2cpp::create_object<app::PolicyEnforcement__Enum>(get_class());
        }
    } // namespace PolicyEnforcement__Enum
} // namespace app::classes::types
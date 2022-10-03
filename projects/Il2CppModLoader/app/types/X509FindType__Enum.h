#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509FindType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509FindType__Enum__Class** type_info;
        inline app::X509FindType__Enum__Class* get_class() {
            return il2cpp::get_class<app::X509FindType__Enum__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509FindType");
        }
        inline app::X509FindType__Enum* create() {
            return il2cpp::create_object<app::X509FindType__Enum>(get_class());
        }
    } // namespace X509FindType__Enum
} // namespace app::classes::types

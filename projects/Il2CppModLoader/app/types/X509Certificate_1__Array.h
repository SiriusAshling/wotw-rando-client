#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Certificate_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Certificate_1__Array__Class** type_info;
        inline app::X509Certificate_1__Array__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate_1__Array__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Certificate[]");
        }
        inline app::X509Certificate_1__Array* create() {
            return il2cpp::create_object<app::X509Certificate_1__Array>(get_class());
        }
    } // namespace X509Certificate_1__Array
} // namespace app::classes::types

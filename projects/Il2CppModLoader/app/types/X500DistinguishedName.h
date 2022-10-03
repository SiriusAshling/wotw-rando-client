#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X500DistinguishedName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X500DistinguishedName__Class** type_info;
        inline app::X500DistinguishedName__Class* get_class() {
            return il2cpp::get_class<app::X500DistinguishedName__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X500DistinguishedName");
        }
        inline app::X500DistinguishedName* create() {
            return il2cpp::create_object<app::X500DistinguishedName>(get_class());
        }
    } // namespace X500DistinguishedName
} // namespace app::classes::types

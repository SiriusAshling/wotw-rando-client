#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509ChainElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509ChainElement__Class** type_info;
        inline app::X509ChainElement__Class* get_class() {
            return il2cpp::get_class<app::X509ChainElement__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainElement");
        }
        inline app::X509ChainElement* create() {
            return il2cpp::create_object<app::X509ChainElement>(get_class());
        }
    } // namespace X509ChainElement
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509ChainElementEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509ChainElementEnumerator__Class** type_info;
        inline app::X509ChainElementEnumerator__Class* get_class() {
            return il2cpp::get_class<app::X509ChainElementEnumerator__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainElementEnumerator");
        }
        inline app::X509ChainElementEnumerator* create() {
            return il2cpp::create_object<app::X509ChainElementEnumerator>(get_class());
        }
    } // namespace X509ChainElementEnumerator
} // namespace app::classes::types

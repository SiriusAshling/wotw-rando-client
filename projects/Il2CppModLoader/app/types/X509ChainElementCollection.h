#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509ChainElementCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509ChainElementCollection__Class** type_info;
        inline app::X509ChainElementCollection__Class* get_class() {
            return il2cpp::get_class<app::X509ChainElementCollection__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainElementCollection");
        }
        inline app::X509ChainElementCollection* create() {
            return il2cpp::create_object<app::X509ChainElementCollection>(get_class());
        }
    } // namespace X509ChainElementCollection
} // namespace app::classes::types

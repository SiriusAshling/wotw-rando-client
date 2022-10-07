#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509StoreManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509StoreManager__Class** type_info;
        inline app::X509StoreManager__Class* get_class() {
            return il2cpp::get_class<app::X509StoreManager__Class>(type_info, "Mono.Security.X509", "X509StoreManager");
        }
        inline app::X509StoreManager* create() {
            return il2cpp::create_object<app::X509StoreManager>(get_class());
        }
    } // namespace X509StoreManager
} // namespace app::classes::types
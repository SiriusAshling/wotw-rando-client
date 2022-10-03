#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Certificate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Certificate__Class** type_info;
        inline app::X509Certificate__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate__Class>(type_info, "Mono.Security.X509", "X509Certificate");
        }
        inline app::X509Certificate* create() {
            return il2cpp::create_object<app::X509Certificate>(get_class());
        }
    } // namespace X509Certificate
} // namespace app::classes::types

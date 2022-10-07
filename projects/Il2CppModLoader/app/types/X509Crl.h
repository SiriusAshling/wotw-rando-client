#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Crl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Crl__Class** type_info;
        inline app::X509Crl__Class* get_class() {
            return il2cpp::get_class<app::X509Crl__Class>(type_info, "Mono.Security.X509", "X509Crl");
        }
        inline app::X509Crl* create() {
            return il2cpp::create_object<app::X509Crl>(get_class());
        }
    } // namespace X509Crl
} // namespace app::classes::types
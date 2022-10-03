#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAManaged {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAManaged__Class** type_info;
        inline app::RSAManaged__Class* get_class() {
            return il2cpp::get_class<app::RSAManaged__Class>(type_info, "Mono.Security.Cryptography", "RSAManaged");
        }
        inline app::RSAManaged* create() {
            return il2cpp::create_object<app::RSAManaged>(get_class());
        }
    } // namespace RSAManaged
} // namespace app::classes::types

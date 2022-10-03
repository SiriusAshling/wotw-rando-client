#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAManaged_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAManaged_1__Class** type_info;
        inline app::RSAManaged_1__Class* get_class() {
            return il2cpp::get_class<app::RSAManaged_1__Class>(type_info, "Mono.Security.Cryptography", "RSAManaged");
        }
        inline app::RSAManaged_1* create() {
            return il2cpp::create_object<app::RSAManaged_1>(get_class());
        }
    } // namespace RSAManaged_1
} // namespace app::classes::types

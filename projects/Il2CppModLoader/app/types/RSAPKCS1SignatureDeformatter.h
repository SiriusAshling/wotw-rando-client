#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1SignatureDeformatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAPKCS1SignatureDeformatter__Class** type_info;
        inline app::RSAPKCS1SignatureDeformatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SignatureDeformatter__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter");
        }
        inline app::RSAPKCS1SignatureDeformatter* create() {
            return il2cpp::create_object<app::RSAPKCS1SignatureDeformatter>(get_class());
        }
    } // namespace RSAPKCS1SignatureDeformatter
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1SHA1SignatureDescription {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAPKCS1SHA1SignatureDescription__Class** type_info;
        inline app::RSAPKCS1SHA1SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SHA1SignatureDescription__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1SHA1SignatureDescription");
        }
        inline app::RSAPKCS1SHA1SignatureDescription* create() {
            return il2cpp::create_object<app::RSAPKCS1SHA1SignatureDescription>(get_class());
        }
    } // namespace RSAPKCS1SHA1SignatureDescription
} // namespace app::classes::types
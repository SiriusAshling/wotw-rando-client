#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1SHA384SignatureDescription {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAPKCS1SHA384SignatureDescription__Class** type_info;
        inline app::RSAPKCS1SHA384SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SHA384SignatureDescription__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1SHA384SignatureDescription");
        }
        inline app::RSAPKCS1SHA384SignatureDescription* create() {
            return il2cpp::create_object<app::RSAPKCS1SHA384SignatureDescription>(get_class());
        }
    } // namespace RSAPKCS1SHA384SignatureDescription
} // namespace app::classes::types
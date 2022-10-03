#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509EnhancedKeyUsageExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509EnhancedKeyUsageExtension__Class** type_info;
        inline app::X509EnhancedKeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::X509EnhancedKeyUsageExtension__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509EnhancedKeyUsageExtension");
        }
        inline app::X509EnhancedKeyUsageExtension* create() {
            return il2cpp::create_object<app::X509EnhancedKeyUsageExtension>(get_class());
        }
    } // namespace X509EnhancedKeyUsageExtension
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HMACSHA384 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HMACSHA384__Class** type_info;
        inline app::HMACSHA384__Class* get_class() {
            return il2cpp::get_class<app::HMACSHA384__Class>(type_info, "System.Security.Cryptography", "HMACSHA384");
        }
        inline app::HMACSHA384* create() {
            return il2cpp::create_object<app::HMACSHA384>(get_class());
        }
    } // namespace HMACSHA384
} // namespace app::classes::types

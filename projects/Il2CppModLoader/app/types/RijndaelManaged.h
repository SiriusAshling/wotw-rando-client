#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RijndaelManaged {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RijndaelManaged__Class** type_info;
        inline app::RijndaelManaged__Class* get_class() {
            return il2cpp::get_class<app::RijndaelManaged__Class>(type_info, "System.Security.Cryptography", "RijndaelManaged");
        }
        inline app::RijndaelManaged* create() {
            return il2cpp::create_object<app::RijndaelManaged>(get_class());
        }
    } // namespace RijndaelManaged
} // namespace app::classes::types

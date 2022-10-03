#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericIdentity__Class** type_info;
        inline app::GenericIdentity__Class* get_class() {
            return il2cpp::get_class<app::GenericIdentity__Class>(type_info, "System.Security.Principal", "GenericIdentity");
        }
        inline app::GenericIdentity* create() {
            return il2cpp::create_object<app::GenericIdentity>(get_class());
        }
    } // namespace GenericIdentity
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X520_CommonName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X520_CommonName__Class** type_info;
        inline app::X520_CommonName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_CommonName__Class>(type_info, "Mono.Security.X509", "X520", "CommonName");
        }
        inline app::X520_CommonName* create() {
            return il2cpp::create_object<app::X520_CommonName>(get_class());
        }
    } // namespace X520_CommonName
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t__Class** type_info;
        inline app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t__Class>(type_info, "Mono.Unity", "UnityTls+unitytls_interface_struct", "unitytls_tlsctx_create_client_t");
        }
        inline app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t>(get_class());
        }
    } // namespace UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t
} // namespace app::classes::types

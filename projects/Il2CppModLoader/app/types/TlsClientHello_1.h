#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsClientHello_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsClientHello_1__Class** type_info;
        inline app::TlsClientHello_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientHello_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientHello");
        }
        inline app::TlsClientHello_1* create() {
            return il2cpp::create_object<app::TlsClientHello_1>(get_class());
        }
    } // namespace TlsClientHello_1
} // namespace app::classes::types
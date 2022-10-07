#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpsClientStream {
        namespace {
            app::HttpsClientStream__Class* type_info_ref = nullptr;
        }
        app::HttpsClientStream__Class** type_info = &type_info_ref;
        inline app::HttpsClientStream__Class* get_class() {
            return il2cpp::get_class<app::HttpsClientStream__Class>(type_info, "Mono.Security.Protocol.Tls", "HttpsClientStream");
        }
        inline app::HttpsClientStream* create() {
            return il2cpp::create_object<app::HttpsClientStream>(get_class());
        }
    } // namespace HttpsClientStream
} // namespace app::classes::types
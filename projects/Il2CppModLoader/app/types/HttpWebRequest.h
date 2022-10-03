#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpWebRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpWebRequest__Class** type_info;
        inline app::HttpWebRequest__Class* get_class() {
            return il2cpp::get_class<app::HttpWebRequest__Class>(type_info, "System.Net", "HttpWebRequest");
        }
        inline app::HttpWebRequest* create() {
            return il2cpp::create_object<app::HttpWebRequest>(get_class());
        }
    } // namespace HttpWebRequest
} // namespace app::classes::types

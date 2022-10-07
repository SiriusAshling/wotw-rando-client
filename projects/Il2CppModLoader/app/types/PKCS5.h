#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS5 {
        namespace {
            app::PKCS5__Class* type_info_ref = nullptr;
        }
        app::PKCS5__Class** type_info = &type_info_ref;
        inline app::PKCS5__Class* get_class() {
            return il2cpp::get_class<app::PKCS5__Class>(type_info, "Mono.Security.X509", "PKCS5");
        }
        inline app::PKCS5* create() {
            return il2cpp::create_object<app::PKCS5>(get_class());
        }
    } // namespace PKCS5
} // namespace app::classes::types
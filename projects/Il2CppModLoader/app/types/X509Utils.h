#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Utils {
        namespace {
            app::X509Utils__Class* type_info_ref = nullptr;
        }
        app::X509Utils__Class** type_info = &type_info_ref;
        inline app::X509Utils__Class* get_class() {
            return il2cpp::get_class<app::X509Utils__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Utils");
        }
        inline app::X509Utils* create() {
            return il2cpp::create_object<app::X509Utils>(get_class());
        }
    } // namespace X509Utils
} // namespace app::classes::types
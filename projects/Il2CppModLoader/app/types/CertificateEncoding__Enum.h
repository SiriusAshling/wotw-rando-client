#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CertificateEncoding__Enum {
        namespace {
            app::CertificateEncoding__Enum__Class* type_info_ref = nullptr;
        }
        app::CertificateEncoding__Enum__Class** type_info = &type_info_ref;
        inline app::CertificateEncoding__Enum__Class* get_class() {
            return il2cpp::get_class<app::CertificateEncoding__Enum__Class>(type_info, "System.Net", "CertificateEncoding");
        }
        inline app::CertificateEncoding__Enum* create() {
            return il2cpp::create_object<app::CertificateEncoding__Enum>(get_class());
        }
    } // namespace CertificateEncoding__Enum
} // namespace app::classes::types

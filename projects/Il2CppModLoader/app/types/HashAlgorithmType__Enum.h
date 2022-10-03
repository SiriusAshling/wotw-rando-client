#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HashAlgorithmType__Enum {
        namespace {
            app::HashAlgorithmType__Enum__Class* type_info_ref = nullptr;
        }
        app::HashAlgorithmType__Enum__Class** type_info = &type_info_ref;
        inline app::HashAlgorithmType__Enum__Class* get_class() {
            return il2cpp::get_class<app::HashAlgorithmType__Enum__Class>(type_info, "Mono.Security.Protocol.Tls", "HashAlgorithmType");
        }
        inline app::HashAlgorithmType__Enum* create() {
            return il2cpp::create_object<app::HashAlgorithmType__Enum>(get_class());
        }
    } // namespace HashAlgorithmType__Enum
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CipherSuiteCode__Enum__Array {
        namespace {
            app::CipherSuiteCode__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::CipherSuiteCode__Enum__Array__Class** type_info = &type_info_ref;
        inline app::CipherSuiteCode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::CipherSuiteCode__Enum__Array__Class>(type_info, "Mono.Security.Interface", "CipherSuiteCode[]");
        }
        inline app::CipherSuiteCode__Enum__Array* create() {
            return il2cpp::create_object<app::CipherSuiteCode__Enum__Array>(get_class());
        }
    } // namespace CipherSuiteCode__Enum__Array
} // namespace app::classes::types

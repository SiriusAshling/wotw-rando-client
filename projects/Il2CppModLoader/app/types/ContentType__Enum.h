#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContentType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContentType__Enum__Class** type_info;
        inline app::ContentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContentType__Enum__Class>(type_info, "Mono.Security.Protocol.Tls", "ContentType");
        }
        inline app::ContentType__Enum* create() {
            return il2cpp::create_object<app::ContentType__Enum>(get_class());
        }
    } // namespace ContentType__Enum
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriComponents__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UriComponents__Enum__Class** type_info;
        inline app::UriComponents__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriComponents__Enum__Class>(type_info, "System", "UriComponents");
        }
        inline app::UriComponents__Enum* create() {
            return il2cpp::create_object<app::UriComponents__Enum>(get_class());
        }
    } // namespace UriComponents__Enum
} // namespace app::classes::types

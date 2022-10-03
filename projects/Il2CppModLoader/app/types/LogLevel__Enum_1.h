#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogLevel__Enum_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LogLevel__Enum_1__Class** type_info;
        inline app::LogLevel__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::LogLevel__Enum_1__Class>(type_info, "PlayFab.Logger", "LogLevel");
        }
        inline app::LogLevel__Enum_1* create() {
            return il2cpp::create_object<app::LogLevel__Enum_1>(get_class());
        }
    } // namespace LogLevel__Enum_1
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberAtlassingPlatform__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberAtlassingPlatform__Enum__Class** type_info;
        inline app::UberAtlassingPlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberAtlassingPlatform__Enum__Class>(type_info, "", "UberAtlassingPlatform");
        }
        inline app::UberAtlassingPlatform__Enum* create() {
            return il2cpp::create_object<app::UberAtlassingPlatform__Enum>(get_class());
        }
    } // namespace UberAtlassingPlatform__Enum
} // namespace app::classes::types
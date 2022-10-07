#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowUIType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShowUIType__Enum__Class** type_info;
        inline app::ShowUIType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShowUIType__Enum__Class>(type_info, "", "ShowUIType");
        }
        inline app::ShowUIType__Enum* create() {
            return il2cpp::create_object<app::ShowUIType__Enum>(get_class());
        }
    } // namespace ShowUIType__Enum
} // namespace app::classes::types
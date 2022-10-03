#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserDataPermission__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserDataPermission__Enum__Class** type_info;
        inline app::UserDataPermission__Enum__Class* get_class() {
            return il2cpp::get_class<app::UserDataPermission__Enum__Class>(type_info, "PlayFab.ClientModels", "UserDataPermission");
        }
        inline app::UserDataPermission__Enum* create() {
            return il2cpp::create_object<app::UserDataPermission__Enum>(get_class());
        }
    } // namespace UserDataPermission__Enum
} // namespace app::classes::types

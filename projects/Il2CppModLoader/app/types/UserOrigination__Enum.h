#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserOrigination__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserOrigination__Enum__Class** type_info;
        inline app::UserOrigination__Enum__Class* get_class() {
            return il2cpp::get_class<app::UserOrigination__Enum__Class>(type_info, "PlayFab.ClientModels", "UserOrigination");
        }
        inline app::UserOrigination__Enum* create() {
            return il2cpp::create_object<app::UserOrigination__Enum>(get_class());
        }
    } // namespace UserOrigination__Enum
} // namespace app::classes::types

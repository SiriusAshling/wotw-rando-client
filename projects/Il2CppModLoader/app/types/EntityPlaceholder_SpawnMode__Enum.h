#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholder_SpawnMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityPlaceholder_SpawnMode__Enum__Class** type_info;
        inline app::EntityPlaceholder_SpawnMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholder_SpawnMode__Enum__Class>(type_info, "", "EntityPlaceholder", "SpawnMode");
        }
        inline app::EntityPlaceholder_SpawnMode__Enum* create() {
            return il2cpp::create_object<app::EntityPlaceholder_SpawnMode__Enum>(get_class());
        }
    } // namespace EntityPlaceholder_SpawnMode__Enum
} // namespace app::classes::types

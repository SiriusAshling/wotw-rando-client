#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterInteractableType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterInteractableType__Enum__Class** type_info;
        inline app::CharacterInteractableType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CharacterInteractableType__Enum__Class>(type_info, "Moon", "CharacterInteractableType");
        }
        inline app::CharacterInteractableType__Enum* create() {
            return il2cpp::create_object<app::CharacterInteractableType__Enum>(get_class());
        }
    } // namespace CharacterInteractableType__Enum
} // namespace app::classes::types

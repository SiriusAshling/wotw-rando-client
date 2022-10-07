#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterInventory_1__Array {
        namespace {
            app::CharacterInventory_1__Array__Class* type_info_ref = nullptr;
        }
        app::CharacterInventory_1__Array__Class** type_info = &type_info_ref;
        inline app::CharacterInventory_1__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterInventory_1__Array__Class>(type_info, "PlayFab.ServerModels", "CharacterInventory[]");
        }
        inline app::CharacterInventory_1__Array* create() {
            return il2cpp::create_object<app::CharacterInventory_1__Array>(get_class());
        }
    } // namespace CharacterInventory_1__Array
} // namespace app::classes::types
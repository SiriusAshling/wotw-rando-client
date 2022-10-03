#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboAdapter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboAdapter__Class** type_info;
        inline app::MeleeComboAdapter__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboAdapter__Class>(type_info, "Moon.ComboSystem", "MeleeComboAdapter");
        }
        inline app::MeleeComboAdapter* create() {
            return il2cpp::create_object<app::MeleeComboAdapter>(get_class());
        }
    } // namespace MeleeComboAdapter
} // namespace app::classes::types

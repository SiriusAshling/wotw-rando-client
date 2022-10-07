#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordstaff_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMoveSwordstaff_c__Class** type_info;
        inline app::MeleeComboMoveSwordstaff_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveSwordstaff_c__Class>(type_info, "", "MeleeComboMoveSwordstaff", "<>c");
        }
        inline app::MeleeComboMoveSwordstaff_c* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordstaff_c>(get_class());
        }
    } // namespace MeleeComboMoveSwordstaff_c
} // namespace app::classes::types
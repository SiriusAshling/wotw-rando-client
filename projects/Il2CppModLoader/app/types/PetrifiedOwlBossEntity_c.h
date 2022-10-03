#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossEntity_c__Class** type_info;
        inline app::PetrifiedOwlBossEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEntity_c__Class>(type_info, "", "PetrifiedOwlBossEntity", "<>c");
        }
        inline app::PetrifiedOwlBossEntity_c* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity_c>(get_class());
        }
    } // namespace PetrifiedOwlBossEntity_c
} // namespace app::classes::types

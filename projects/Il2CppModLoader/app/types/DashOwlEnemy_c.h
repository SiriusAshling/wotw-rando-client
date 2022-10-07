#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemy_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlEnemy_c__Class** type_info;
        inline app::DashOwlEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DashOwlEnemy_c__Class>(type_info, "", "DashOwlEnemy", "<>c");
        }
        inline app::DashOwlEnemy_c* create() {
            return il2cpp::create_object<app::DashOwlEnemy_c>(get_class());
        }
    } // namespace DashOwlEnemy_c
} // namespace app::classes::types
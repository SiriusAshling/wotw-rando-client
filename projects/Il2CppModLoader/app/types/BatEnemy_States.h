#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BatEnemy_States__Class** type_info;
        inline app::BatEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::BatEnemy_States__Class>(type_info, "", "BatEnemy", "States");
        }
        inline app::BatEnemy_States* create() {
            return il2cpp::create_object<app::BatEnemy_States>(get_class());
        }
    } // namespace BatEnemy_States
} // namespace app::classes::types

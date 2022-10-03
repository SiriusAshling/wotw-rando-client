#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeGameWorldArea_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeGameWorldArea_c__Class** type_info;
        inline app::RuntimeGameWorldArea_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeGameWorldArea_c__Class>(type_info, "", "RuntimeGameWorldArea", "<>c");
        }
        inline app::RuntimeGameWorldArea_c* create() {
            return il2cpp::create_object<app::RuntimeGameWorldArea_c>(get_class());
        }
    } // namespace RuntimeGameWorldArea_c
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoShootBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoShootBehaviour_c__Class** type_info;
        inline app::SkeetoShootBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoShootBehaviour_c__Class>(type_info, "", "SkeetoShootBehaviour", "<>c");
        }
        inline app::SkeetoShootBehaviour_c* create() {
            return il2cpp::create_object<app::SkeetoShootBehaviour_c>(get_class());
        }
    } // namespace SkeetoShootBehaviour_c
} // namespace app::classes::types
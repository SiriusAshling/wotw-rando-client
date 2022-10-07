#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartographerTurningBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CartographerTurningBehaviour_c__Class** type_info;
        inline app::CartographerTurningBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerTurningBehaviour_c__Class>(type_info, "", "CartographerTurningBehaviour", "<>c");
        }
        inline app::CartographerTurningBehaviour_c* create() {
            return il2cpp::create_object<app::CartographerTurningBehaviour_c>(get_class());
        }
    } // namespace CartographerTurningBehaviour_c
} // namespace app::classes::types
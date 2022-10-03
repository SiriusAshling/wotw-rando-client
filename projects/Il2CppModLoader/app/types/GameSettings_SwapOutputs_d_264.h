#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameSettings_SwapOutputs_d_264 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameSettings_SwapOutputs_d_264__Class** type_info;
        inline app::GameSettings_SwapOutputs_d_264__Class* get_class() {
            return il2cpp::get_nested_class<app::GameSettings_SwapOutputs_d_264__Class>(type_info, "", "GameSettings", "<SwapOutputs>d__264");
        }
        inline app::GameSettings_SwapOutputs_d_264* create() {
            return il2cpp::create_object<app::GameSettings_SwapOutputs_d_264>(get_class());
        }
    } // namespace GameSettings_SwapOutputs_d_264
} // namespace app::classes::types

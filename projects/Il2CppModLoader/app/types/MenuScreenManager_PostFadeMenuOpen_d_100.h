#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MenuScreenManager_PostFadeMenuOpen_d_100 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MenuScreenManager_PostFadeMenuOpen_d_100__Class** type_info;
        inline app::MenuScreenManager_PostFadeMenuOpen_d_100__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuScreenManager_PostFadeMenuOpen_d_100__Class>(type_info, "", "MenuScreenManager", "<PostFadeMenuOpen>d__100");
        }
        inline app::MenuScreenManager_PostFadeMenuOpen_d_100* create() {
            return il2cpp::create_object<app::MenuScreenManager_PostFadeMenuOpen_d_100>(get_class());
        }
    } // namespace MenuScreenManager_PostFadeMenuOpen_d_100
} // namespace app::classes::types

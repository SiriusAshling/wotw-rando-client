#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptionsScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OptionsScreen__Class** type_info;
        inline app::OptionsScreen__Class* get_class() {
            return il2cpp::get_class<app::OptionsScreen__Class>(type_info, "", "OptionsScreen");
        }
        inline app::OptionsScreen* create() {
            return il2cpp::create_object<app::OptionsScreen>(get_class());
        }
    } // namespace OptionsScreen
} // namespace app::classes::types

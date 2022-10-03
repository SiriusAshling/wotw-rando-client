#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalAlphaCutoffMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GlobalAlphaCutoffMenuItem__Class** type_info;
        inline app::GlobalAlphaCutoffMenuItem__Class* get_class() {
            return il2cpp::get_class<app::GlobalAlphaCutoffMenuItem__Class>(type_info, "", "GlobalAlphaCutoffMenuItem");
        }
        inline app::GlobalAlphaCutoffMenuItem* create() {
            return il2cpp::create_object<app::GlobalAlphaCutoffMenuItem>(get_class());
        }
    } // namespace GlobalAlphaCutoffMenuItem
} // namespace app::classes::types

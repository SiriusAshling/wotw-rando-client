#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureAnimator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextureAnimator_c__Class** type_info;
        inline app::TextureAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureAnimator_c__Class>(type_info, "", "TextureAnimator", "<>c");
        }
        inline app::TextureAnimator_c* create() {
            return il2cpp::create_object<app::TextureAnimator_c>(get_class());
        }
    } // namespace TextureAnimator_c
} // namespace app::classes::types

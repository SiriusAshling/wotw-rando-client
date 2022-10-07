#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasUtilities {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAtlasUtilities__Class** type_info;
        inline app::UberShaderAtlasUtilities__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasUtilities__Class>(type_info, "", "UberShaderAtlasUtilities");
        }
        inline app::UberShaderAtlasUtilities* create() {
            return il2cpp::create_object<app::UberShaderAtlasUtilities>(get_class());
        }
    } // namespace UberShaderAtlasUtilities
} // namespace app::classes::types
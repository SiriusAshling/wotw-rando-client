#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_TVVignette {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_TVVignette__Class** type_info;
        inline app::ShaderID_TVVignette__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_TVVignette__Class>(type_info, "Colorful", "ShaderID_TVVignette");
        }
        inline app::ShaderID_TVVignette* create() {
            return il2cpp::create_object<app::ShaderID_TVVignette>(get_class());
        }
    } // namespace ShaderID_TVVignette
} // namespace app::classes::types

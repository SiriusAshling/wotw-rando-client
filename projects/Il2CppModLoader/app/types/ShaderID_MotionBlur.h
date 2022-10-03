#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_MotionBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_MotionBlur__Class** type_info;
        inline app::ShaderID_MotionBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_MotionBlur__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_MotionBlur");
        }
        inline app::ShaderID_MotionBlur* create() {
            return il2cpp::create_object<app::ShaderID_MotionBlur>(get_class());
        }
    } // namespace ShaderID_MotionBlur
} // namespace app::classes::types

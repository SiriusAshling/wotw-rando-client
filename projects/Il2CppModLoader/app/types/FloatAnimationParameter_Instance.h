#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatAnimationParameter_Instance {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatAnimationParameter_Instance__Class** type_info;
        inline app::FloatAnimationParameter_Instance__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatAnimationParameter_Instance__Class>(type_info, "Moon", "FloatAnimationParameter", "Instance");
        }
        inline app::FloatAnimationParameter_Instance* create() {
            return il2cpp::create_object<app::FloatAnimationParameter_Instance>(get_class());
        }
    } // namespace FloatAnimationParameter_Instance
} // namespace app::classes::types

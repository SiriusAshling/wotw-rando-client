#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurableJointMotion__Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConfigurableJointMotion__Enum__Array__Class** type_info;
        inline app::ConfigurableJointMotion__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::ConfigurableJointMotion__Enum__Array__Class>(type_info, "UnityEngine", "ConfigurableJointMotion[]");
        }
        inline app::ConfigurableJointMotion__Enum__Array* create() {
            return il2cpp::create_object<app::ConfigurableJointMotion__Enum__Array>(get_class());
        }
    } // namespace ConfigurableJointMotion__Enum__Array
} // namespace app::classes::types

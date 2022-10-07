#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisallowMultipleComponent__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DisallowMultipleComponent__Array__Class** type_info;
        inline app::DisallowMultipleComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::DisallowMultipleComponent__Array__Class>(type_info, "UnityEngine", "DisallowMultipleComponent[]");
        }
        inline app::DisallowMultipleComponent__Array* create() {
            return il2cpp::create_object<app::DisallowMultipleComponent__Array>(get_class());
        }
    } // namespace DisallowMultipleComponent__Array
} // namespace app::classes::types
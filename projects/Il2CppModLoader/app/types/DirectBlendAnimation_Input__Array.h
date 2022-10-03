#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectBlendAnimation_Input__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DirectBlendAnimation_Input__Array__Class** type_info;
        inline app::DirectBlendAnimation_Input__Array__Class* get_class() {
            return il2cpp::get_class<app::DirectBlendAnimation_Input__Array__Class>(type_info, "Moon", "DirectBlendAnimation+Input[]");
        }
        inline app::DirectBlendAnimation_Input__Array* create() {
            return il2cpp::create_object<app::DirectBlendAnimation_Input__Array>(get_class());
        }
    } // namespace DirectBlendAnimation_Input__Array
} // namespace app::classes::types

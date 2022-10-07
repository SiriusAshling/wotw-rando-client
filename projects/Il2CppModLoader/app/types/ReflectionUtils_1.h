#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionUtils_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionUtils_1__Class** type_info;
        inline app::ReflectionUtils_1__Class* get_class() {
            return il2cpp::get_class<app::ReflectionUtils_1__Class>(type_info, "PlayFab.Json", "ReflectionUtils");
        }
        inline app::ReflectionUtils_1* create() {
            return il2cpp::create_object<app::ReflectionUtils_1>(get_class());
        }
    } // namespace ReflectionUtils_1
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiateDebugUtility_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiateDebugUtility_c__Class** type_info;
        inline app::InstantiateDebugUtility_c__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateDebugUtility_c__Class>(type_info, "InstantiateDebug", "InstantiateDebugUtility", "<>c");
        }
        inline app::InstantiateDebugUtility_c* create() {
            return il2cpp::create_object<app::InstantiateDebugUtility_c>(get_class());
        }
    } // namespace InstantiateDebugUtility_c
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests_DoMovementTests_d_15 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests_DoMovementTests_d_15__Class** type_info;
        inline app::Tests_DoMovementTests_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoMovementTests_d_15__Class>(type_info, "HierarchyPerfTest", "Tests", "<DoMovementTests>d__15");
        }
        inline app::Tests_DoMovementTests_d_15* create() {
            return il2cpp::create_object<app::Tests_DoMovementTests_d_15>(get_class());
        }
    } // namespace Tests_DoMovementTests_d_15
} // namespace app::classes::types
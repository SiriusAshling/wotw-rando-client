#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests_DoReparentTest_d_17 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests_DoReparentTest_d_17__Class** type_info;
        inline app::Tests_DoReparentTest_d_17__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoReparentTest_d_17__Class>(type_info, "HierarchyPerfTest", "Tests", "<DoReparentTest>d__17");
        }
        inline app::Tests_DoReparentTest_d_17* create() {
            return il2cpp::create_object<app::Tests_DoReparentTest_d_17>(get_class());
        }
    } // namespace Tests_DoReparentTest_d_17
} // namespace app::classes::types

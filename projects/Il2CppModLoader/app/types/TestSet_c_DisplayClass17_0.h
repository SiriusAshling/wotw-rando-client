#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestSet_c_DisplayClass17_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestSet_c_DisplayClass17_0__Class** type_info;
        inline app::TestSet_c_DisplayClass17_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TestSet_c_DisplayClass17_0__Class>(type_info, "", "TestSet", "<>c__DisplayClass17_0");
        }
        inline app::TestSet_c_DisplayClass17_0* create() {
            return il2cpp::create_object<app::TestSet_c_DisplayClass17_0>(get_class());
        }
    } // namespace TestSet_c_DisplayClass17_0
} // namespace app::classes::types
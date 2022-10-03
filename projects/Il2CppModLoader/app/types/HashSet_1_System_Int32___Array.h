#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HashSet_1_System_Int32___Array {
        namespace {
            app::HashSet_1_System_Int32___Array__Class* type_info_ref = nullptr;
        }
        app::HashSet_1_System_Int32___Array__Class** type_info = &type_info_ref;
        inline app::HashSet_1_System_Int32___Array__Class* get_class() {
            return il2cpp::get_class<app::HashSet_1_System_Int32___Array__Class>(type_info, "System.Collections.Generic", "HashSet`1[System.Int32][]");
        }
        inline app::HashSet_1_System_Int32___Array* create() {
            return il2cpp::create_object<app::HashSet_1_System_Int32___Array>(get_class());
        }
    } // namespace HashSet_1_System_Int32___Array
} // namespace app::classes::types

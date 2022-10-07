#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestSet__Array {
        namespace {
            app::TestSet__Array__Class* type_info_ref = nullptr;
        }
        app::TestSet__Array__Class** type_info = &type_info_ref;
        inline app::TestSet__Array__Class* get_class() {
            return il2cpp::get_class<app::TestSet__Array__Class>(type_info, "", "TestSet[]");
        }
        inline app::TestSet__Array* create() {
            return il2cpp::create_object<app::TestSet__Array>(get_class());
        }
    } // namespace TestSet__Array
} // namespace app::classes::types
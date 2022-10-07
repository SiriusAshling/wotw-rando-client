#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Object__Array__Array {
        namespace {
            app::Object__Array__Array__Class* type_info_ref = nullptr;
        }
        app::Object__Array__Array__Class** type_info = &type_info_ref;
        inline app::Object__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Object__Array__Array__Class>(type_info, "System", "Object[][]");
        }
        inline app::Object__Array__Array* create() {
            return il2cpp::create_object<app::Object__Array__Array>(get_class());
        }
    } // namespace Object__Array__Array
} // namespace app::classes::types
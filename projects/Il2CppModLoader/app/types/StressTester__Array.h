#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTester__Array {
        namespace {
            app::StressTester__Array__Class* type_info_ref = nullptr;
        }
        app::StressTester__Array__Class** type_info = &type_info_ref;
        inline app::StressTester__Array__Class* get_class() {
            return il2cpp::get_class<app::StressTester__Array__Class>(type_info, "", "StressTester[]");
        }
        inline app::StressTester__Array* create() {
            return il2cpp::create_object<app::StressTester__Array>(get_class());
        }
    } // namespace StressTester__Array
} // namespace app::classes::types

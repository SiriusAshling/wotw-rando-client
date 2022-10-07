#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Challenge__Array {
        namespace {
            app::Challenge__Array__Class* type_info_ref = nullptr;
        }
        app::Challenge__Array__Class** type_info = &type_info_ref;
        inline app::Challenge__Array__Class* get_class() {
            return il2cpp::get_class<app::Challenge__Array__Class>(type_info, "", "Challenge[]");
        }
        inline app::Challenge__Array* create() {
            return il2cpp::create_object<app::Challenge__Array>(get_class());
        }
    } // namespace Challenge__Array
} // namespace app::classes::types
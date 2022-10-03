#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Challenge {
        namespace {
            app::Challenge__Class* type_info_ref = nullptr;
        }
        app::Challenge__Class** type_info = &type_info_ref;
        inline app::Challenge__Class* get_class() {
            return il2cpp::get_class<app::Challenge__Class>(type_info, "", "Challenge");
        }
        inline app::Challenge* create() {
            return il2cpp::create_object<app::Challenge>(get_class());
        }
        inline app::Challenge__Array* create_array(int size) {
            return il2cpp::array_new<app::Challenge__Array>(get_class(), size);
        }
    } // namespace Challenge
} // namespace app::classes::types

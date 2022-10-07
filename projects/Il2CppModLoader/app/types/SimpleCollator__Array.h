#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleCollator__Array {
        namespace {
            app::SimpleCollator__Array__Class* type_info_ref = nullptr;
        }
        app::SimpleCollator__Array__Class** type_info = &type_info_ref;
        inline app::SimpleCollator__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleCollator__Array__Class>(type_info, "Mono.Globalization.Unicode", "SimpleCollator[]");
        }
        inline app::SimpleCollator__Array* create() {
            return il2cpp::create_object<app::SimpleCollator__Array>(get_class());
        }
    } // namespace SimpleCollator__Array
} // namespace app::classes::types
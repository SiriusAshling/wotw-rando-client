#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildData__Array {
        namespace {
            app::BuildData__Array__Class* type_info_ref = nullptr;
        }
        app::BuildData__Array__Class** type_info = &type_info_ref;
        inline app::BuildData__Array__Class* get_class() {
            return il2cpp::get_class<app::BuildData__Array__Class>(type_info, "", "BuildData[]");
        }
        inline app::BuildData__Array* create() {
            return il2cpp::create_object<app::BuildData__Array>(get_class());
        }
    } // namespace BuildData__Array
} // namespace app::classes::types

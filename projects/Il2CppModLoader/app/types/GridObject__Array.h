#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GridObject__Array {
        namespace {
            app::GridObject__Array__Class* type_info_ref = nullptr;
        }
        app::GridObject__Array__Class** type_info = &type_info_ref;
        inline app::GridObject__Array__Class* get_class() {
            return il2cpp::get_class<app::GridObject__Array__Class>(type_info, "", "GridObject[]");
        }
        inline app::GridObject__Array* create() {
            return il2cpp::create_object<app::GridObject__Array>(get_class());
        }
    } // namespace GridObject__Array
} // namespace app::classes::types
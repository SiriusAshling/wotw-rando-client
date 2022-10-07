#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchCase__Array {
        namespace {
            app::SwitchCase__Array__Class* type_info_ref = nullptr;
        }
        app::SwitchCase__Array__Class** type_info = &type_info_ref;
        inline app::SwitchCase__Array__Class* get_class() {
            return il2cpp::get_class<app::SwitchCase__Array__Class>(type_info, "System.Linq.Expressions", "SwitchCase[]");
        }
        inline app::SwitchCase__Array* create() {
            return il2cpp::create_object<app::SwitchCase__Array>(get_class());
        }
    } // namespace SwitchCase__Array
} // namespace app::classes::types
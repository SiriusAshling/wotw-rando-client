#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace YieldAwaitable {
        namespace {
            app::YieldAwaitable__Class* type_info_ref = nullptr;
        }
        app::YieldAwaitable__Class** type_info = &type_info_ref;
        inline app::YieldAwaitable__Class* get_class() {
            return il2cpp::get_class<app::YieldAwaitable__Class>(type_info, "System.Runtime.CompilerServices", "YieldAwaitable");
        }
        inline app::YieldAwaitable* create() {
            return il2cpp::create_object<app::YieldAwaitable>(get_class());
        }
        inline app::YieldAwaitable__Boxed* box(app::YieldAwaitable value) {
            return il2cpp::box_value<app::YieldAwaitable__Boxed>(get_class(), value);
        }
    } // namespace YieldAwaitable
} // namespace app::classes::types
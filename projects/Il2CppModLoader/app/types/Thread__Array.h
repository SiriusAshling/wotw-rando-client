#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Thread__Array {
        namespace {
            app::Thread__Array__Class* type_info_ref = nullptr;
        }
        app::Thread__Array__Class** type_info = &type_info_ref;
        inline app::Thread__Array__Class* get_class() {
            return il2cpp::get_class<app::Thread__Array__Class>(type_info, "System.Threading", "Thread[]");
        }
        inline app::Thread__Array* create() {
            return il2cpp::create_object<app::Thread__Array>(get_class());
        }
    } // namespace Thread__Array
} // namespace app::classes::types

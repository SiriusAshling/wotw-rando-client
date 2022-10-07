#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivationChild__Array {
        namespace {
            app::ActivationChild__Array__Class* type_info_ref = nullptr;
        }
        app::ActivationChild__Array__Class** type_info = &type_info_ref;
        inline app::ActivationChild__Array__Class* get_class() {
            return il2cpp::get_class<app::ActivationChild__Array__Class>(type_info, "", "ActivationChild[]");
        }
        inline app::ActivationChild__Array* create() {
            return il2cpp::create_object<app::ActivationChild__Array>(get_class());
        }
    } // namespace ActivationChild__Array
} // namespace app::classes::types
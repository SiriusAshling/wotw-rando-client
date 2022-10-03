#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateController_ApplierContext__Array {
        namespace {
            app::UberStateController_ApplierContext__Array__Class* type_info_ref = nullptr;
        }
        app::UberStateController_ApplierContext__Array__Class** type_info = &type_info_ref;
        inline app::UberStateController_ApplierContext__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateController_ApplierContext__Array__Class>(type_info, "Moon", "UberStateController+ApplierContext[]");
        }
        inline app::UberStateController_ApplierContext__Array* create() {
            return il2cpp::create_object<app::UberStateController_ApplierContext__Array>(get_class());
        }
    } // namespace UberStateController_ApplierContext__Array
} // namespace app::classes::types

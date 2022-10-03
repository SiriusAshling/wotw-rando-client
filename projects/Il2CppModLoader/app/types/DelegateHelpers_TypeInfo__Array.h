#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelegateHelpers_TypeInfo__Array {
        namespace {
            app::DelegateHelpers_TypeInfo__Array__Class* type_info_ref = nullptr;
        }
        app::DelegateHelpers_TypeInfo__Array__Class** type_info = &type_info_ref;
        inline app::DelegateHelpers_TypeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DelegateHelpers_TypeInfo__Array__Class>(type_info, "System.Linq.Expressions.Compiler", "DelegateHelpers+TypeInfo[]");
        }
        inline app::DelegateHelpers_TypeInfo__Array* create() {
            return il2cpp::create_object<app::DelegateHelpers_TypeInfo__Array>(get_class());
        }
    } // namespace DelegateHelpers_TypeInfo__Array
} // namespace app::classes::types

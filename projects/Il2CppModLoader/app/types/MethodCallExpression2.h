#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodCallExpression2__Class** type_info;
        inline app::MethodCallExpression2__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression2__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression2");
        }
        inline app::MethodCallExpression2* create() {
            return il2cpp::create_object<app::MethodCallExpression2>(get_class());
        }
    } // namespace MethodCallExpression2
} // namespace app::classes::types

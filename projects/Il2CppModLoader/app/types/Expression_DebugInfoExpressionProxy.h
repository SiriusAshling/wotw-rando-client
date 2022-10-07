#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_DebugInfoExpressionProxy {
        namespace {
            app::Expression_DebugInfoExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_DebugInfoExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_DebugInfoExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_DebugInfoExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "DebugInfoExpressionProxy");
        }
        inline app::Expression_DebugInfoExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_DebugInfoExpressionProxy>(get_class());
        }
    } // namespace Expression_DebugInfoExpressionProxy
} // namespace app::classes::types
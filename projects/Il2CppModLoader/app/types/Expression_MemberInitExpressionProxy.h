#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_MemberInitExpressionProxy {
        namespace {
            app::Expression_MemberInitExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_MemberInitExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_MemberInitExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_MemberInitExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "MemberInitExpressionProxy");
        }
        inline app::Expression_MemberInitExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_MemberInitExpressionProxy>(get_class());
        }
    } // namespace Expression_MemberInitExpressionProxy
} // namespace app::classes::types

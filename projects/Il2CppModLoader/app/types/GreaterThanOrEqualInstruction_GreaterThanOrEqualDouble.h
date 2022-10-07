#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class** type_info;
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualDouble");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble
} // namespace app::classes::types
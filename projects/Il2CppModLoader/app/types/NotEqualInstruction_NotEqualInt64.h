#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction_NotEqualInt64__Class** type_info;
        inline app::NotEqualInstruction_NotEqualInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualInt64");
        }
        inline app::NotEqualInstruction_NotEqualInt64* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualInt64>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualInt64
} // namespace app::classes::types
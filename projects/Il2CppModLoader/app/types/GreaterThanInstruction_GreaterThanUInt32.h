#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanUInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanInstruction_GreaterThanUInt32__Class** type_info;
        inline app::GreaterThanInstruction_GreaterThanUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanUInt32");
        }
        inline app::GreaterThanInstruction_GreaterThanUInt32* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanUInt32>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanUInt32
} // namespace app::classes::types

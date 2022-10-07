#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementUInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IncrementInstruction_IncrementUInt16__Class** type_info;
        inline app::IncrementInstruction_IncrementUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementUInt16");
        }
        inline app::IncrementInstruction_IncrementUInt16* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementUInt16>(get_class());
        }
    } // namespace IncrementInstruction_IncrementUInt16
} // namespace app::classes::types
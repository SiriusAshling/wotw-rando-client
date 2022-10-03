#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulInstruction_MulUInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulInstruction_MulUInt16__Class** type_info;
        inline app::MulInstruction_MulUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulUInt16");
        }
        inline app::MulInstruction_MulUInt16* create() {
            return il2cpp::create_object<app::MulInstruction_MulUInt16>(get_class());
        }
    } // namespace MulInstruction_MulUInt16
} // namespace app::classes::types

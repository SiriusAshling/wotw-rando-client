#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualUInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class** type_info;
        inline app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualUInt16");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualUInt16* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualUInt16>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualUInt16
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanInstruction_LessThanSingle__Class** type_info;
        inline app::LessThanInstruction_LessThanSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanSingle");
        }
        inline app::LessThanInstruction_LessThanSingle* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanSingle>(get_class());
        }
    } // namespace LessThanInstruction_LessThanSingle
} // namespace app::classes::types
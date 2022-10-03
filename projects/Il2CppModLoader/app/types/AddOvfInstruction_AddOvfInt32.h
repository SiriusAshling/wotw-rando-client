#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddOvfInstruction_AddOvfInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddOvfInstruction_AddOvfInt32__Class** type_info;
        inline app::AddOvfInstruction_AddOvfInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AddOvfInstruction_AddOvfInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddOvfInstruction", "AddOvfInt32");
        }
        inline app::AddOvfInstruction_AddOvfInt32* create() {
            return il2cpp::create_object<app::AddOvfInstruction_AddOvfInt32>(get_class());
        }
    } // namespace AddOvfInstruction_AddOvfInt32
} // namespace app::classes::types

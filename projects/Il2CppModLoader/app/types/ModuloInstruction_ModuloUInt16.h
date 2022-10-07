#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloUInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModuloInstruction_ModuloUInt16__Class** type_info;
        inline app::ModuloInstruction_ModuloUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloUInt16");
        }
        inline app::ModuloInstruction_ModuloUInt16* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloUInt16>(get_class());
        }
    } // namespace ModuloInstruction_ModuloUInt16
} // namespace app::classes::types
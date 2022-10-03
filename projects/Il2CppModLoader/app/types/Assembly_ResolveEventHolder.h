#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Assembly_ResolveEventHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Assembly_ResolveEventHolder__Class** type_info;
        inline app::Assembly_ResolveEventHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::Assembly_ResolveEventHolder__Class>(type_info, "System.Reflection", "Assembly", "ResolveEventHolder");
        }
        inline app::Assembly_ResolveEventHolder* create() {
            return il2cpp::create_object<app::Assembly_ResolveEventHolder>(get_class());
        }
    } // namespace Assembly_ResolveEventHolder
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyDefaultAliasAttribute {
        namespace {
            app::AssemblyDefaultAliasAttribute__Class* type_info_ref = nullptr;
        }
        app::AssemblyDefaultAliasAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyDefaultAliasAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyDefaultAliasAttribute__Class>(type_info, "System.Reflection", "AssemblyDefaultAliasAttribute");
        }
        inline app::AssemblyDefaultAliasAttribute* create() {
            return il2cpp::create_object<app::AssemblyDefaultAliasAttribute>(get_class());
        }
    } // namespace AssemblyDefaultAliasAttribute
} // namespace app::classes::types
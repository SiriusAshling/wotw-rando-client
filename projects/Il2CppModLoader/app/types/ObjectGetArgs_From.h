#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectGetArgs_From {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectGetArgs_From__Class** type_info;
        inline app::ObjectGetArgs_From__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectGetArgs_From__Class>(type_info, "", "ObjectGetArgs", "From");
        }
        inline app::ObjectGetArgs_From* create() {
            return il2cpp::create_object<app::ObjectGetArgs_From>(get_class());
        }
    } // namespace ObjectGetArgs_From
} // namespace app::classes::types

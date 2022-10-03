#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NestedContainer_Site {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NestedContainer_Site__Class** type_info;
        inline app::NestedContainer_Site__Class* get_class() {
            return il2cpp::get_nested_class<app::NestedContainer_Site__Class>(type_info, "System.ComponentModel", "NestedContainer", "Site");
        }
        inline app::NestedContainer_Site* create() {
            return il2cpp::create_object<app::NestedContainer_Site>(get_class());
        }
    } // namespace NestedContainer_Site
} // namespace app::classes::types

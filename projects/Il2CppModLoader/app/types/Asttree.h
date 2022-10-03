#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Asttree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Asttree__Class** type_info;
        inline app::Asttree__Class* get_class() {
            return il2cpp::get_class<app::Asttree__Class>(type_info, "System.Xml.Schema", "Asttree");
        }
        inline app::Asttree* create() {
            return il2cpp::create_object<app::Asttree>(get_class());
        }
        inline app::Asttree__Array* create_array(int size) {
            return il2cpp::array_new<app::Asttree__Array>(get_class(), size);
        }
    } // namespace Asttree
} // namespace app::classes::types

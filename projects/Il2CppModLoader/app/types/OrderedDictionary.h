#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrderedDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrderedDictionary__Class** type_info;
        inline app::OrderedDictionary__Class* get_class() {
            return il2cpp::get_class<app::OrderedDictionary__Class>(type_info, "System.Collections.Specialized", "OrderedDictionary");
        }
        inline app::OrderedDictionary* create() {
            return il2cpp::create_object<app::OrderedDictionary>(get_class());
        }
    } // namespace OrderedDictionary
} // namespace app::classes::types

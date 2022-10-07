#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameValueCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameValueCollection__Class** type_info;
        inline app::NameValueCollection__Class* get_class() {
            return il2cpp::get_class<app::NameValueCollection__Class>(type_info, "System.Collections.Specialized", "NameValueCollection");
        }
        inline app::NameValueCollection* create() {
            return il2cpp::create_object<app::NameValueCollection>(get_class());
        }
    } // namespace NameValueCollection
} // namespace app::classes::types
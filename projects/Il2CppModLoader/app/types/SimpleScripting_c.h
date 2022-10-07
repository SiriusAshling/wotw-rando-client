#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleScripting_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleScripting_c__Class** type_info;
        inline app::SimpleScripting_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleScripting_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SimpleScripting", "<>c");
        }
        inline app::SimpleScripting_c* create() {
            return il2cpp::create_object<app::SimpleScripting_c>(get_class());
        }
    } // namespace SimpleScripting_c
} // namespace app::classes::types
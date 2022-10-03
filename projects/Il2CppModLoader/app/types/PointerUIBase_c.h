#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerUIBase_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PointerUIBase_c__Class** type_info;
        inline app::PointerUIBase_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerUIBase_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PointerUIBase", "<>c");
        }
        inline app::PointerUIBase_c* create() {
            return il2cpp::create_object<app::PointerUIBase_c>(get_class());
        }
    } // namespace PointerUIBase_c
} // namespace app::classes::types

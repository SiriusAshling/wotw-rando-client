#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FaderB_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FaderB_c__Class** type_info;
        inline app::FaderB_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FaderB_c__Class>(type_info, "", "FaderB", "<>c");
        }
        inline app::FaderB_c* create() {
            return il2cpp::create_object<app::FaderB_c>(get_class());
        }
    } // namespace FaderB_c
} // namespace app::classes::types
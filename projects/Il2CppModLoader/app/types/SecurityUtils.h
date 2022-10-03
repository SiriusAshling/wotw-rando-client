#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityUtils__Class** type_info;
        inline app::SecurityUtils__Class* get_class() {
            return il2cpp::get_class<app::SecurityUtils__Class>(type_info, "System", "SecurityUtils");
        }
        inline app::SecurityUtils* create() {
            return il2cpp::create_object<app::SecurityUtils>(get_class());
        }
    } // namespace SecurityUtils
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILayoutController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILayoutController__Class** type_info;
        inline app::ILayoutController__Class* get_class() {
            return il2cpp::get_class<app::ILayoutController__Class>(type_info, "UnityEngine.UI", "ILayoutController");
        }
    } // namespace ILayoutController
} // namespace app::classes::types
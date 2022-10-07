#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateWwiseStateManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateWwiseStateManager__Class** type_info;
        inline app::UberStateWwiseStateManager__Class* get_class() {
            return il2cpp::get_class<app::UberStateWwiseStateManager__Class>(type_info, "Moon.Wwise", "UberStateWwiseStateManager");
        }
        inline app::UberStateWwiseStateManager* create() {
            return il2cpp::create_object<app::UberStateWwiseStateManager>(get_class());
        }
    } // namespace UberStateWwiseStateManager
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockContainerItemResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlockContainerItemResult_1__Class** type_info;
        inline app::UnlockContainerItemResult_1__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerItemResult_1__Class>(type_info, "PlayFab.ServerModels", "UnlockContainerItemResult");
        }
        inline app::UnlockContainerItemResult_1* create() {
            return il2cpp::create_object<app::UnlockContainerItemResult_1>(get_class());
        }
    } // namespace UnlockContainerItemResult_1
} // namespace app::classes::types

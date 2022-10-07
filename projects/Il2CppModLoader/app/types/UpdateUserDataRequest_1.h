#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateUserDataRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateUserDataRequest_1__Class** type_info;
        inline app::UpdateUserDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserDataRequest_1__Class>(type_info, "PlayFab.ServerModels", "UpdateUserDataRequest");
        }
        inline app::UpdateUserDataRequest_1* create() {
            return il2cpp::create_object<app::UpdateUserDataRequest_1>(get_class());
        }
    } // namespace UpdateUserDataRequest_1
} // namespace app::classes::types
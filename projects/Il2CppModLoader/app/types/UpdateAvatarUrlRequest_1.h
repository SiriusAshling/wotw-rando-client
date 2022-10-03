#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateAvatarUrlRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateAvatarUrlRequest_1__Class** type_info;
        inline app::UpdateAvatarUrlRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateAvatarUrlRequest_1__Class>(type_info, "PlayFab.ServerModels", "UpdateAvatarUrlRequest");
        }
        inline app::UpdateAvatarUrlRequest_1* create() {
            return il2cpp::create_object<app::UpdateAvatarUrlRequest_1>(get_class());
        }
    } // namespace UpdateAvatarUrlRequest_1
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotifyMatchmakerPlayerLeftRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotifyMatchmakerPlayerLeftRequest__Class** type_info;
        inline app::NotifyMatchmakerPlayerLeftRequest__Class* get_class() {
            return il2cpp::get_class<app::NotifyMatchmakerPlayerLeftRequest__Class>(type_info, "PlayFab.ServerModels", "NotifyMatchmakerPlayerLeftRequest");
        }
        inline app::NotifyMatchmakerPlayerLeftRequest* create() {
            return il2cpp::create_object<app::NotifyMatchmakerPlayerLeftRequest>(get_class());
        }
    } // namespace NotifyMatchmakerPlayerLeftRequest
} // namespace app::classes::types

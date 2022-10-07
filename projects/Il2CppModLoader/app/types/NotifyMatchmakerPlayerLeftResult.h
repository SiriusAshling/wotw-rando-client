#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotifyMatchmakerPlayerLeftResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotifyMatchmakerPlayerLeftResult__Class** type_info;
        inline app::NotifyMatchmakerPlayerLeftResult__Class* get_class() {
            return il2cpp::get_class<app::NotifyMatchmakerPlayerLeftResult__Class>(type_info, "PlayFab.ServerModels", "NotifyMatchmakerPlayerLeftResult");
        }
        inline app::NotifyMatchmakerPlayerLeftResult* create() {
            return il2cpp::create_object<app::NotifyMatchmakerPlayerLeftResult>(get_class());
        }
    } // namespace NotifyMatchmakerPlayerLeftResult
} // namespace app::classes::types
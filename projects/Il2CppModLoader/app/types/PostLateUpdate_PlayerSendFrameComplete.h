#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_PlayerSendFrameComplete {
        namespace {
            app::PostLateUpdate_PlayerSendFrameComplete__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_PlayerSendFrameComplete__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_PlayerSendFrameComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PlayerSendFrameComplete__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PlayerSendFrameComplete");
        }
        inline app::PostLateUpdate_PlayerSendFrameComplete* create() {
            return il2cpp::create_object<app::PostLateUpdate_PlayerSendFrameComplete>(get_class());
        }
        inline app::PostLateUpdate_PlayerSendFrameComplete__Boxed* box(app::PostLateUpdate_PlayerSendFrameComplete value) {
            return il2cpp::box_value<app::PostLateUpdate_PlayerSendFrameComplete__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PlayerSendFrameComplete
} // namespace app::classes::types

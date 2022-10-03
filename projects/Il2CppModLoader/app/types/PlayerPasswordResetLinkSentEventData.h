#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerPasswordResetLinkSentEventData {
        namespace {
            app::PlayerPasswordResetLinkSentEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerPasswordResetLinkSentEventData__Class** type_info = &type_info_ref;
        inline app::PlayerPasswordResetLinkSentEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerPasswordResetLinkSentEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerPasswordResetLinkSentEventData");
        }
        inline app::PlayerPasswordResetLinkSentEventData* create() {
            return il2cpp::create_object<app::PlayerPasswordResetLinkSentEventData>(get_class());
        }
    } // namespace PlayerPasswordResetLinkSentEventData
} // namespace app::classes::types

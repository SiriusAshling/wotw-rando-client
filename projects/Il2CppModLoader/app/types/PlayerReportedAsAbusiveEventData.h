#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerReportedAsAbusiveEventData {
        namespace {
            app::PlayerReportedAsAbusiveEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerReportedAsAbusiveEventData__Class** type_info = &type_info_ref;
        inline app::PlayerReportedAsAbusiveEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerReportedAsAbusiveEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerReportedAsAbusiveEventData");
        }
        inline app::PlayerReportedAsAbusiveEventData* create() {
            return il2cpp::create_object<app::PlayerReportedAsAbusiveEventData>(get_class());
        }
    } // namespace PlayerReportedAsAbusiveEventData
} // namespace app::classes::types

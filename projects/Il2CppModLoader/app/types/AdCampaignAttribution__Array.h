#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AdCampaignAttribution__Array {
        namespace {
            app::AdCampaignAttribution__Array__Class* type_info_ref = nullptr;
        }
        app::AdCampaignAttribution__Array__Class** type_info = &type_info_ref;
        inline app::AdCampaignAttribution__Array__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttribution__Array__Class>(type_info, "PlayFab.ServerModels", "AdCampaignAttribution[]");
        }
        inline app::AdCampaignAttribution__Array* create() {
            return il2cpp::create_object<app::AdCampaignAttribution__Array>(get_class());
        }
    } // namespace AdCampaignAttribution__Array
} // namespace app::classes::types
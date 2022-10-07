#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleQueueConfigUpdatedEventData {
        namespace {
            app::TitleQueueConfigUpdatedEventData__Class* type_info_ref = nullptr;
        }
        app::TitleQueueConfigUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::TitleQueueConfigUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleQueueConfigUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleQueueConfigUpdatedEventData");
        }
        inline app::TitleQueueConfigUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleQueueConfigUpdatedEventData>(get_class());
        }
    } // namespace TitleQueueConfigUpdatedEventData
} // namespace app::classes::types
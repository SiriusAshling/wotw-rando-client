#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MasterPlayerTitleDeletedEventData {
        namespace {
            app::MasterPlayerTitleDeletedEventData__Class* type_info_ref = nullptr;
        }
        app::MasterPlayerTitleDeletedEventData__Class** type_info = &type_info_ref;
        inline app::MasterPlayerTitleDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::MasterPlayerTitleDeletedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "MasterPlayerTitleDeletedEventData");
        }
        inline app::MasterPlayerTitleDeletedEventData* create() {
            return il2cpp::create_object<app::MasterPlayerTitleDeletedEventData>(get_class());
        }
    } // namespace MasterPlayerTitleDeletedEventData
} // namespace app::classes::types
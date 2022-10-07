#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleDeletedEventData {
        namespace {
            app::TitleDeletedEventData__Class* type_info_ref = nullptr;
        }
        app::TitleDeletedEventData__Class** type_info = &type_info_ref;
        inline app::TitleDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleDeletedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleDeletedEventData");
        }
        inline app::TitleDeletedEventData* create() {
            return il2cpp::create_object<app::TitleDeletedEventData>(get_class());
        }
    } // namespace TitleDeletedEventData
} // namespace app::classes::types
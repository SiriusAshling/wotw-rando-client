#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerSummary__Array {
        namespace {
            app::MultiplayerServerSummary__Array__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerSummary__Array__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerSummary__Array__Class>(type_info, "PlayFab.MultiplayerModels", "MultiplayerServerSummary[]");
        }
        inline app::MultiplayerServerSummary__Array* create() {
            return il2cpp::create_object<app::MultiplayerServerSummary__Array>(get_class());
        }
    } // namespace MultiplayerServerSummary__Array
} // namespace app::classes::types
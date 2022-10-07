#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildSummary__Array {
        namespace {
            app::BuildSummary__Array__Class* type_info_ref = nullptr;
        }
        app::BuildSummary__Array__Class** type_info = &type_info_ref;
        inline app::BuildSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::BuildSummary__Array__Class>(type_info, "PlayFab.MultiplayerModels", "BuildSummary[]");
        }
        inline app::BuildSummary__Array* create() {
            return il2cpp::create_object<app::BuildSummary__Array>(get_class());
        }
    } // namespace BuildSummary__Array
} // namespace app::classes::types
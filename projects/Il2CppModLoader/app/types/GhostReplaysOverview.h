#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostReplaysOverview {
        namespace {
            app::GhostReplaysOverview__Class* type_info_ref = nullptr;
        }
        app::GhostReplaysOverview__Class** type_info = &type_info_ref;
        inline app::GhostReplaysOverview__Class* get_class() {
            return il2cpp::get_class<app::GhostReplaysOverview__Class>(type_info, "", "GhostReplaysOverview");
        }
        inline app::GhostReplaysOverview* create() {
            return il2cpp::create_object<app::GhostReplaysOverview>(get_class());
        }
    } // namespace GhostReplaysOverview
} // namespace app::classes::types
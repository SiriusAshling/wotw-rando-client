#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugBossTimelineBehaviour {
        namespace {
            app::HornBugBossTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::HornBugBossTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugBossTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossTimelineBehaviour__Class>(type_info, "", "HornBugBossTimelineBehaviour");
        }
        inline app::HornBugBossTimelineBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossTimelineBehaviour>(get_class());
        }
    } // namespace HornBugBossTimelineBehaviour
} // namespace app::classes::types
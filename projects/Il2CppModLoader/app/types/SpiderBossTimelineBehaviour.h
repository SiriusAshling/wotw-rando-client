#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossTimelineBehaviour {
        namespace {
            app::SpiderBossTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossTimelineBehaviour__Class>(type_info, "", "SpiderBossTimelineBehaviour");
        }
        inline app::SpiderBossTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossTimelineBehaviour
} // namespace app::classes::types
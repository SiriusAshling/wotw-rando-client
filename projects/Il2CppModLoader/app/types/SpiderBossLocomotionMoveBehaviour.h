#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionMoveBehaviour {
        namespace {
            app::SpiderBossLocomotionMoveBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocomotionMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocomotionMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionMoveBehaviour__Class>(type_info, "", "SpiderBossLocomotionMoveBehaviour");
        }
        inline app::SpiderBossLocomotionMoveBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionMoveBehaviour>(get_class());
        }
    } // namespace SpiderBossLocomotionMoveBehaviour
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionTurningBehaviour {
        namespace {
            app::SpiderBossLocomotionTurningBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocomotionTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionTurningBehaviour__Class>(type_info, "", "SpiderBossLocomotionTurningBehaviour");
        }
        inline app::SpiderBossLocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionTurningBehaviour>(get_class());
        }
    } // namespace SpiderBossLocomotionTurningBehaviour
} // namespace app::classes::types
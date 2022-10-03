#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwapSpiderBossBehaviourZoneIdleAction {
        namespace {
            app::SwapSpiderBossBehaviourZoneIdleAction__Class* type_info_ref = nullptr;
        }
        app::SwapSpiderBossBehaviourZoneIdleAction__Class** type_info = &type_info_ref;
        inline app::SwapSpiderBossBehaviourZoneIdleAction__Class* get_class() {
            return il2cpp::get_class<app::SwapSpiderBossBehaviourZoneIdleAction__Class>(type_info, "", "SwapSpiderBossBehaviourZoneIdleAction");
        }
        inline app::SwapSpiderBossBehaviourZoneIdleAction* create() {
            return il2cpp::create_object<app::SwapSpiderBossBehaviourZoneIdleAction>(get_class());
        }
    } // namespace SwapSpiderBossBehaviourZoneIdleAction
} // namespace app::classes::types

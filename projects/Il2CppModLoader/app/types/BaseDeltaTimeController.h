#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseDeltaTimeController {
        namespace {
            app::BaseDeltaTimeController__Class* type_info_ref = nullptr;
        }
        app::BaseDeltaTimeController__Class** type_info = &type_info_ref;
        inline app::BaseDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::BaseDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "BaseDeltaTimeController");
        }
        inline app::BaseDeltaTimeController* create() {
            return il2cpp::create_object<app::BaseDeltaTimeController>(get_class());
        }
    } // namespace BaseDeltaTimeController
} // namespace app::classes::types
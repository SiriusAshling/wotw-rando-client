#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTimelineOnConditionController {
        namespace {
            app::MoonTimelineOnConditionController__Class* type_info_ref = nullptr;
        }
        app::MoonTimelineOnConditionController__Class** type_info = &type_info_ref;
        inline app::MoonTimelineOnConditionController__Class* get_class() {
            return il2cpp::get_class<app::MoonTimelineOnConditionController__Class>(type_info, "", "MoonTimelineOnConditionController");
        }
        inline app::MoonTimelineOnConditionController* create() {
            return il2cpp::create_object<app::MoonTimelineOnConditionController>(get_class());
        }
    } // namespace MoonTimelineOnConditionController
} // namespace app::classes::types
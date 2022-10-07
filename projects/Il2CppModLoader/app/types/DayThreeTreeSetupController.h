#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DayThreeTreeSetupController {
        namespace {
            app::DayThreeTreeSetupController__Class* type_info_ref = nullptr;
        }
        app::DayThreeTreeSetupController__Class** type_info = &type_info_ref;
        inline app::DayThreeTreeSetupController__Class* get_class() {
            return il2cpp::get_class<app::DayThreeTreeSetupController__Class>(type_info, "", "DayThreeTreeSetupController");
        }
        inline app::DayThreeTreeSetupController* create() {
            return il2cpp::create_object<app::DayThreeTreeSetupController>(get_class());
        }
    } // namespace DayThreeTreeSetupController
} // namespace app::classes::types
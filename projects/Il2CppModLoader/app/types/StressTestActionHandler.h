#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTestActionHandler {
        namespace {
            app::StressTestActionHandler__Class* type_info_ref = nullptr;
        }
        app::StressTestActionHandler__Class** type_info = &type_info_ref;
        inline app::StressTestActionHandler__Class* get_class() {
            return il2cpp::get_class<app::StressTestActionHandler__Class>(type_info, "", "StressTestActionHandler");
        }
        inline app::StressTestActionHandler* create() {
            return il2cpp::create_object<app::StressTestActionHandler>(get_class());
        }
    } // namespace StressTestActionHandler
} // namespace app::classes::types
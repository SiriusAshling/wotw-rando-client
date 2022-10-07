#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HeatUpPlatformAction {
        namespace {
            app::HeatUpPlatformAction__Class* type_info_ref = nullptr;
        }
        app::HeatUpPlatformAction__Class** type_info = &type_info_ref;
        inline app::HeatUpPlatformAction__Class* get_class() {
            return il2cpp::get_class<app::HeatUpPlatformAction__Class>(type_info, "", "HeatUpPlatformAction");
        }
        inline app::HeatUpPlatformAction* create() {
            return il2cpp::create_object<app::HeatUpPlatformAction>(get_class());
        }
    } // namespace HeatUpPlatformAction
} // namespace app::classes::types
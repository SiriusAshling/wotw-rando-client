#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatLocomotion {
        namespace {
            app::SpiderBatLocomotion__Class* type_info_ref = nullptr;
        }
        app::SpiderBatLocomotion__Class** type_info = &type_info_ref;
        inline app::SpiderBatLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatLocomotion__Class>(type_info, "", "SpiderBatLocomotion");
        }
        inline app::SpiderBatLocomotion* create() {
            return il2cpp::create_object<app::SpiderBatLocomotion>(get_class());
        }
    } // namespace SpiderBatLocomotion
} // namespace app::classes::types

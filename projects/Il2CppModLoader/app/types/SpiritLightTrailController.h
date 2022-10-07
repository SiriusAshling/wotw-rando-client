#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightTrailController {
        namespace {
            app::SpiritLightTrailController__Class* type_info_ref = nullptr;
        }
        app::SpiritLightTrailController__Class** type_info = &type_info_ref;
        inline app::SpiritLightTrailController__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightTrailController__Class>(type_info, "", "SpiritLightTrailController");
        }
        inline app::SpiritLightTrailController* create() {
            return il2cpp::create_object<app::SpiritLightTrailController>(get_class());
        }
    } // namespace SpiritLightTrailController
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraLookAheadController {
        namespace {
            app::CameraLookAheadController__Class* type_info_ref = nullptr;
        }
        app::CameraLookAheadController__Class** type_info = &type_info_ref;
        inline app::CameraLookAheadController__Class* get_class() {
            return il2cpp::get_class<app::CameraLookAheadController__Class>(type_info, "", "CameraLookAheadController");
        }
        inline app::CameraLookAheadController* create() {
            return il2cpp::create_object<app::CameraLookAheadController>(get_class());
        }
    } // namespace CameraLookAheadController
} // namespace app::classes::types
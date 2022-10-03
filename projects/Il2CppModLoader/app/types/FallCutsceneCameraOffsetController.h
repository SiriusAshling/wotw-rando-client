#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallCutsceneCameraOffsetController {
        namespace {
            app::FallCutsceneCameraOffsetController__Class* type_info_ref = nullptr;
        }
        app::FallCutsceneCameraOffsetController__Class** type_info = &type_info_ref;
        inline app::FallCutsceneCameraOffsetController__Class* get_class() {
            return il2cpp::get_class<app::FallCutsceneCameraOffsetController__Class>(type_info, "", "FallCutsceneCameraOffsetController");
        }
        inline app::FallCutsceneCameraOffsetController* create() {
            return il2cpp::create_object<app::FallCutsceneCameraOffsetController>(get_class());
        }
    } // namespace FallCutsceneCameraOffsetController
} // namespace app::classes::types

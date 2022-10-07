#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionVolumeMoveTimelineBehaviour {
        namespace {
            app::LocomotionVolumeMoveTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::LocomotionVolumeMoveTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionVolumeMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionVolumeMoveTimelineBehaviour__Class>(type_info, "", "LocomotionVolumeMoveTimelineBehaviour");
        }
        inline app::LocomotionVolumeMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionVolumeMoveTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionVolumeMoveTimelineBehaviour
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeChaseCameraZoomOffsetAction {
        namespace {
            app::ChangeChaseCameraZoomOffsetAction__Class* type_info_ref = nullptr;
        }
        app::ChangeChaseCameraZoomOffsetAction__Class** type_info = &type_info_ref;
        inline app::ChangeChaseCameraZoomOffsetAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeChaseCameraZoomOffsetAction__Class>(type_info, "", "ChangeChaseCameraZoomOffsetAction");
        }
        inline app::ChangeChaseCameraZoomOffsetAction* create() {
            return il2cpp::create_object<app::ChangeChaseCameraZoomOffsetAction>(get_class());
        }
    } // namespace ChangeChaseCameraZoomOffsetAction
} // namespace app::classes::types

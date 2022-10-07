#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraTransformMetaDataDrivenAnimator {
        namespace {
            app::CameraTransformMetaDataDrivenAnimator__Class* type_info_ref = nullptr;
        }
        app::CameraTransformMetaDataDrivenAnimator__Class** type_info = &type_info_ref;
        inline app::CameraTransformMetaDataDrivenAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraTransformMetaDataDrivenAnimator__Class>(type_info, "", "CameraTransformMetaDataDrivenAnimator");
        }
        inline app::CameraTransformMetaDataDrivenAnimator* create() {
            return il2cpp::create_object<app::CameraTransformMetaDataDrivenAnimator>(get_class());
        }
    } // namespace CameraTransformMetaDataDrivenAnimator
} // namespace app::classes::types
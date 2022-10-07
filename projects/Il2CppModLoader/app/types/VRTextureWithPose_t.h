#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRTextureWithPose_t {
        namespace {
            app::VRTextureWithPose_t__Class* type_info_ref = nullptr;
        }
        app::VRTextureWithPose_t__Class** type_info = &type_info_ref;
        inline app::VRTextureWithPose_t__Class* get_class() {
            return il2cpp::get_class<app::VRTextureWithPose_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VRTextureWithPose_t");
        }
        inline app::VRTextureWithPose_t* create() {
            return il2cpp::create_object<app::VRTextureWithPose_t>(get_class());
        }
        inline app::VRTextureWithPose_t__Boxed* box(app::VRTextureWithPose_t value) {
            return il2cpp::box_value<app::VRTextureWithPose_t__Boxed>(get_class(), value);
        }
    } // namespace VRTextureWithPose_t
} // namespace app::classes::types
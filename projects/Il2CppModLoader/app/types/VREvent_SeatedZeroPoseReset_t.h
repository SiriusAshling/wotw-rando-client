#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VREvent_SeatedZeroPoseReset_t {
        namespace {
            app::VREvent_SeatedZeroPoseReset_t__Class* type_info_ref = nullptr;
        }
        app::VREvent_SeatedZeroPoseReset_t__Class** type_info = &type_info_ref;
        inline app::VREvent_SeatedZeroPoseReset_t__Class* get_class() {
            return il2cpp::get_class<app::VREvent_SeatedZeroPoseReset_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VREvent_SeatedZeroPoseReset_t");
        }
        inline app::VREvent_SeatedZeroPoseReset_t* create() {
            return il2cpp::create_object<app::VREvent_SeatedZeroPoseReset_t>(get_class());
        }
        inline app::VREvent_SeatedZeroPoseReset_t__Boxed* box(app::VREvent_SeatedZeroPoseReset_t value) {
            return il2cpp::box_value<app::VREvent_SeatedZeroPoseReset_t__Boxed>(get_class(), value);
        }
    } // namespace VREvent_SeatedZeroPoseReset_t
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VREvent_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VREvent_t__Class** type_info;
        inline app::VREvent_t__Class* get_class() {
            return il2cpp::get_class<app::VREvent_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VREvent_t");
        }
        inline app::VREvent_t* create() {
            return il2cpp::create_object<app::VREvent_t>(get_class());
        }
        inline app::VREvent_t__Boxed* box(app::VREvent_t value) {
            return il2cpp::box_value<app::VREvent_t__Boxed>(get_class(), value);
        }
    } // namespace VREvent_t
} // namespace app::classes::types
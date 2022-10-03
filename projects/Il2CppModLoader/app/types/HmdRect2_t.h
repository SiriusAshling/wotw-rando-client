#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HmdRect2_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HmdRect2_t__Class** type_info;
        inline app::HmdRect2_t__Class* get_class() {
            return il2cpp::get_class<app::HmdRect2_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdRect2_t");
        }
        inline app::HmdRect2_t* create() {
            return il2cpp::create_object<app::HmdRect2_t>(get_class());
        }
        inline app::HmdRect2_t__Boxed* box(app::HmdRect2_t value) {
            return il2cpp::box_value<app::HmdRect2_t__Boxed>(get_class(), value);
        }
    } // namespace HmdRect2_t
} // namespace app::classes::types

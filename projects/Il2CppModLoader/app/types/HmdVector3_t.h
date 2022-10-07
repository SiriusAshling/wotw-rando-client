#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HmdVector3_t {
        namespace {
            app::HmdVector3_t__Class* type_info_ref = nullptr;
        }
        app::HmdVector3_t__Class** type_info = &type_info_ref;
        inline app::HmdVector3_t__Class* get_class() {
            return il2cpp::get_class<app::HmdVector3_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdVector3_t");
        }
        inline app::HmdVector3_t* create() {
            return il2cpp::create_object<app::HmdVector3_t>(get_class());
        }
        inline app::HmdVector3_t__Boxed* box(app::HmdVector3_t value) {
            return il2cpp::box_value<app::HmdVector3_t__Boxed>(get_class(), value);
        }
    } // namespace HmdVector3_t
} // namespace app::classes::types
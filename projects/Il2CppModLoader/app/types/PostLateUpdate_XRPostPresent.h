#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_XRPostPresent {
        namespace {
            app::PostLateUpdate_XRPostPresent__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_XRPostPresent__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_XRPostPresent__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_XRPostPresent__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "XRPostPresent");
        }
        inline app::PostLateUpdate_XRPostPresent* create() {
            return il2cpp::create_object<app::PostLateUpdate_XRPostPresent>(get_class());
        }
        inline app::PostLateUpdate_XRPostPresent__Boxed* box(app::PostLateUpdate_XRPostPresent value) {
            return il2cpp::box_value<app::PostLateUpdate_XRPostPresent__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_XRPostPresent
} // namespace app::classes::types
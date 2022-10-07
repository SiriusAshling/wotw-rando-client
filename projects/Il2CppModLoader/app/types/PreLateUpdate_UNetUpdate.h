#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_UNetUpdate {
        namespace {
            app::PreLateUpdate_UNetUpdate__Class* type_info_ref = nullptr;
        }
        app::PreLateUpdate_UNetUpdate__Class** type_info = &type_info_ref;
        inline app::PreLateUpdate_UNetUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_UNetUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "UNetUpdate");
        }
        inline app::PreLateUpdate_UNetUpdate* create() {
            return il2cpp::create_object<app::PreLateUpdate_UNetUpdate>(get_class());
        }
        inline app::PreLateUpdate_UNetUpdate__Boxed* box(app::PreLateUpdate_UNetUpdate value) {
            return il2cpp::box_value<app::PreLateUpdate_UNetUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_UNetUpdate
} // namespace app::classes::types
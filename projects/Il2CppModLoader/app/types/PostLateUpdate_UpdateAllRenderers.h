#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateAllRenderers {
        namespace {
            app::PostLateUpdate_UpdateAllRenderers__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_UpdateAllRenderers__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_UpdateAllRenderers__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateAllRenderers__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateAllRenderers");
        }
        inline app::PostLateUpdate_UpdateAllRenderers* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateAllRenderers>(get_class());
        }
        inline app::PostLateUpdate_UpdateAllRenderers__Boxed* box(app::PostLateUpdate_UpdateAllRenderers value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateAllRenderers__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateAllRenderers
} // namespace app::classes::types
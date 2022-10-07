#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_DirectorRenderImage {
        namespace {
            app::PostLateUpdate_DirectorRenderImage__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_DirectorRenderImage__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_DirectorRenderImage__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_DirectorRenderImage__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "DirectorRenderImage");
        }
        inline app::PostLateUpdate_DirectorRenderImage* create() {
            return il2cpp::create_object<app::PostLateUpdate_DirectorRenderImage>(get_class());
        }
        inline app::PostLateUpdate_DirectorRenderImage__Boxed* box(app::PostLateUpdate_DirectorRenderImage value) {
            return il2cpp::box_value<app::PostLateUpdate_DirectorRenderImage__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_DirectorRenderImage
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateAllSkinnedMeshes {
        namespace {
            app::PostLateUpdate_UpdateAllSkinnedMeshes__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_UpdateAllSkinnedMeshes__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_UpdateAllSkinnedMeshes__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateAllSkinnedMeshes__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateAllSkinnedMeshes");
        }
        inline app::PostLateUpdate_UpdateAllSkinnedMeshes* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateAllSkinnedMeshes>(get_class());
        }
        inline app::PostLateUpdate_UpdateAllSkinnedMeshes__Boxed* box(app::PostLateUpdate_UpdateAllSkinnedMeshes value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateAllSkinnedMeshes__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateAllSkinnedMeshes
} // namespace app::classes::types

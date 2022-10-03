#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriGhostRigVisuals_GhostVisualSettings__Array {
        namespace {
            app::OriGhostRigVisuals_GhostVisualSettings__Array__Class* type_info_ref = nullptr;
        }
        app::OriGhostRigVisuals_GhostVisualSettings__Array__Class** type_info = &type_info_ref;
        inline app::OriGhostRigVisuals_GhostVisualSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::OriGhostRigVisuals_GhostVisualSettings__Array__Class>(type_info, "", "OriGhostRigVisuals+GhostVisualSettings[]");
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings__Array* create() {
            return il2cpp::create_object<app::OriGhostRigVisuals_GhostVisualSettings__Array>(get_class());
        }
    } // namespace OriGhostRigVisuals_GhostVisualSettings__Array
} // namespace app::classes::types

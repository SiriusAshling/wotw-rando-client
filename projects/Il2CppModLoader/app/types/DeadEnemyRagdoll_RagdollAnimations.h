#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeadEnemyRagdoll_RagdollAnimations {
        namespace {
            app::DeadEnemyRagdoll_RagdollAnimations__Class* type_info_ref = nullptr;
        }
        app::DeadEnemyRagdoll_RagdollAnimations__Class** type_info = &type_info_ref;
        inline app::DeadEnemyRagdoll_RagdollAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::DeadEnemyRagdoll_RagdollAnimations__Class>(type_info, "", "DeadEnemyRagdoll", "RagdollAnimations");
        }
        inline app::DeadEnemyRagdoll_RagdollAnimations* create() {
            return il2cpp::create_object<app::DeadEnemyRagdoll_RagdollAnimations>(get_class());
        }
    } // namespace DeadEnemyRagdoll_RagdollAnimations
} // namespace app::classes::types
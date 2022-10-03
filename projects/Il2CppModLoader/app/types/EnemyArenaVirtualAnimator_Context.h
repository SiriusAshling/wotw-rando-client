#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaVirtualAnimator_Context {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyArenaVirtualAnimator_Context__Class** type_info;
        inline app::EnemyArenaVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaVirtualAnimator_Context__Class>(type_info, "", "EnemyArenaVirtualAnimator", "Context");
        }
        inline app::EnemyArenaVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::EnemyArenaVirtualAnimator_Context>(get_class());
        }
        inline app::EnemyArenaVirtualAnimator_Context__Boxed* box(app::EnemyArenaVirtualAnimator_Context value) {
            return il2cpp::box_value<app::EnemyArenaVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace EnemyArenaVirtualAnimator_Context
} // namespace app::classes::types

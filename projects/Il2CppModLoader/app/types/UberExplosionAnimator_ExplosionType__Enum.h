#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberExplosionAnimator_ExplosionType__Enum {
        namespace {
            app::UberExplosionAnimator_ExplosionType__Enum__Class* type_info_ref = nullptr;
        }
        app::UberExplosionAnimator_ExplosionType__Enum__Class** type_info = &type_info_ref;
        inline app::UberExplosionAnimator_ExplosionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberExplosionAnimator_ExplosionType__Enum__Class>(type_info, "", "UberExplosionAnimator", "ExplosionType");
        }
        inline app::UberExplosionAnimator_ExplosionType__Enum* create() {
            return il2cpp::create_object<app::UberExplosionAnimator_ExplosionType__Enum>(get_class());
        }
    } // namespace UberExplosionAnimator_ExplosionType__Enum
} // namespace app::classes::types

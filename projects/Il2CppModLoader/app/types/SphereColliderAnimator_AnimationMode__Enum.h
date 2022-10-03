#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SphereColliderAnimator_AnimationMode__Enum {
        namespace {
            app::SphereColliderAnimator_AnimationMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SphereColliderAnimator_AnimationMode__Enum__Class** type_info = &type_info_ref;
        inline app::SphereColliderAnimator_AnimationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SphereColliderAnimator_AnimationMode__Enum__Class>(type_info, "", "SphereColliderAnimator", "AnimationMode");
        }
        inline app::SphereColliderAnimator_AnimationMode__Enum* create() {
            return il2cpp::create_object<app::SphereColliderAnimator_AnimationMode__Enum>(get_class());
        }
    } // namespace SphereColliderAnimator_AnimationMode__Enum
} // namespace app::classes::types

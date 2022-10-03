#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationBase {
        namespace {
            app::CharacterAnimationBase__Class* type_info_ref = nullptr;
        }
        app::CharacterAnimationBase__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationBase__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationBase__Class>(type_info, "RootMotion.Demos", "CharacterAnimationBase");
        }
        inline app::CharacterAnimationBase* create() {
            return il2cpp::create_object<app::CharacterAnimationBase>(get_class());
        }
    } // namespace CharacterAnimationBase
} // namespace app::classes::types

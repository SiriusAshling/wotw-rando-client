#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMaskNode {
        namespace {
            app::AnimationMaskNode__Class* type_info_ref = nullptr;
        }
        app::AnimationMaskNode__Class** type_info = &type_info_ref;
        inline app::AnimationMaskNode__Class* get_class() {
            return il2cpp::get_class<app::AnimationMaskNode__Class>(type_info, "Moon", "AnimationMaskNode");
        }
        inline app::AnimationMaskNode* create() {
            return il2cpp::create_object<app::AnimationMaskNode>(get_class());
        }
    } // namespace AnimationMaskNode
} // namespace app::classes::types
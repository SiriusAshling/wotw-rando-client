#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorClipInfo__Array {
        namespace {
            app::AnimatorClipInfo__Array__Class* type_info_ref = nullptr;
        }
        app::AnimatorClipInfo__Array__Class** type_info = &type_info_ref;
        inline app::AnimatorClipInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimatorClipInfo__Array__Class>(type_info, "UnityEngine", "AnimatorClipInfo[]");
        }
        inline app::AnimatorClipInfo__Array* create() {
            return il2cpp::create_object<app::AnimatorClipInfo__Array>(get_class());
        }
    } // namespace AnimatorClipInfo__Array
} // namespace app::classes::types
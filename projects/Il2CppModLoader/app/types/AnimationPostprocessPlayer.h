#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessPlayer {
        namespace {
            app::AnimationPostprocessPlayer__Class* type_info_ref = nullptr;
        }
        app::AnimationPostprocessPlayer__Class** type_info = &type_info_ref;
        inline app::AnimationPostprocessPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessPlayer__Class>(type_info, "Moon.Timeline", "AnimationPostprocessPlayer");
        }
        inline app::AnimationPostprocessPlayer* create() {
            return il2cpp::create_object<app::AnimationPostprocessPlayer>(get_class());
        }
    } // namespace AnimationPostprocessPlayer
} // namespace app::classes::types
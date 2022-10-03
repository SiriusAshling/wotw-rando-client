#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormAnimationPlayer {
        namespace {
            app::SandWormAnimationPlayer__Class* type_info_ref = nullptr;
        }
        app::SandWormAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::SandWormAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::SandWormAnimationPlayer__Class>(type_info, "Moon.Timeline", "SandWormAnimationPlayer");
        }
        inline app::SandWormAnimationPlayer* create() {
            return il2cpp::create_object<app::SandWormAnimationPlayer>(get_class());
        }
    } // namespace SandWormAnimationPlayer
} // namespace app::classes::types

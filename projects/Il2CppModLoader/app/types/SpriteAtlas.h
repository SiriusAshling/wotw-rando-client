#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteAtlas {
        namespace {
            app::SpriteAtlas__Class* type_info_ref = nullptr;
        }
        app::SpriteAtlas__Class** type_info = &type_info_ref;
        inline app::SpriteAtlas__Class* get_class() {
            return il2cpp::get_class<app::SpriteAtlas__Class>(type_info, "UnityEngine.U2D", "SpriteAtlas");
        }
        inline app::SpriteAtlas* create() {
            return il2cpp::create_object<app::SpriteAtlas>(get_class());
        }
    } // namespace SpriteAtlas
} // namespace app::classes::types
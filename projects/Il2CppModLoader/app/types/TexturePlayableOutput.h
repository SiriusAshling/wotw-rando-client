#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TexturePlayableOutput {
        namespace {
            app::TexturePlayableOutput__Class* type_info_ref = nullptr;
        }
        app::TexturePlayableOutput__Class** type_info = &type_info_ref;
        inline app::TexturePlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::TexturePlayableOutput__Class>(type_info, "UnityEngine.Experimental.Playables", "TexturePlayableOutput");
        }
        inline app::TexturePlayableOutput* create() {
            return il2cpp::create_object<app::TexturePlayableOutput>(get_class());
        }
        inline app::TexturePlayableOutput__Boxed* box(app::TexturePlayableOutput value) {
            return il2cpp::box_value<app::TexturePlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace TexturePlayableOutput
} // namespace app::classes::types
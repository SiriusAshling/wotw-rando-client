#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayableOutput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayableOutput__Class** type_info;
        inline app::PlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::PlayableOutput__Class>(type_info, "UnityEngine.Playables", "PlayableOutput");
        }
        inline app::PlayableOutput* create() {
            return il2cpp::create_object<app::PlayableOutput>(get_class());
        }
        inline app::PlayableOutput__Boxed* box(app::PlayableOutput value) {
            return il2cpp::box_value<app::PlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace PlayableOutput
} // namespace app::classes::types

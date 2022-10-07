#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioClipPlayable {
        namespace {
            app::AudioClipPlayable__Class* type_info_ref = nullptr;
        }
        app::AudioClipPlayable__Class** type_info = &type_info_ref;
        inline app::AudioClipPlayable__Class* get_class() {
            return il2cpp::get_class<app::AudioClipPlayable__Class>(type_info, "UnityEngine.Audio", "AudioClipPlayable");
        }
        inline app::AudioClipPlayable* create() {
            return il2cpp::create_object<app::AudioClipPlayable>(get_class());
        }
        inline app::AudioClipPlayable__Boxed* box(app::AudioClipPlayable value) {
            return il2cpp::box_value<app::AudioClipPlayable__Boxed>(get_class(), value);
        }
    } // namespace AudioClipPlayable
} // namespace app::classes::types
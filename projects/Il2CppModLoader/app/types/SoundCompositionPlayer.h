#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionPlayer {
        namespace {
            app::SoundCompositionPlayer__Class* type_info_ref = nullptr;
        }
        app::SoundCompositionPlayer__Class** type_info = &type_info_ref;
        inline app::SoundCompositionPlayer__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionPlayer__Class>(type_info, "", "SoundCompositionPlayer");
        }
        inline app::SoundCompositionPlayer* create() {
            return il2cpp::create_object<app::SoundCompositionPlayer>(get_class());
        }
    } // namespace SoundCompositionPlayer
} // namespace app::classes::types

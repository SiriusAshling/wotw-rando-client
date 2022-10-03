#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCinematicToGameplay {
        namespace {
            app::SeinCinematicToGameplay__Class* type_info_ref = nullptr;
        }
        app::SeinCinematicToGameplay__Class** type_info = &type_info_ref;
        inline app::SeinCinematicToGameplay__Class* get_class() {
            return il2cpp::get_class<app::SeinCinematicToGameplay__Class>(type_info, "", "SeinCinematicToGameplay");
        }
        inline app::SeinCinematicToGameplay* create() {
            return il2cpp::create_object<app::SeinCinematicToGameplay>(get_class());
        }
    } // namespace SeinCinematicToGameplay
} // namespace app::classes::types

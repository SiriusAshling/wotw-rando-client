#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundController2D {
        namespace {
            app::SoundController2D__Class* type_info_ref = nullptr;
        }
        app::SoundController2D__Class** type_info = &type_info_ref;
        inline app::SoundController2D__Class* get_class() {
            return il2cpp::get_class<app::SoundController2D__Class>(type_info, "", "SoundController2D");
        }
        inline app::SoundController2D* create() {
            return il2cpp::create_object<app::SoundController2D>(get_class());
        }
    } // namespace SoundController2D
} // namespace app::classes::types

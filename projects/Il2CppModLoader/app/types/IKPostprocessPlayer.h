#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKPostprocessPlayer {
        namespace {
            app::IKPostprocessPlayer__Class* type_info_ref = nullptr;
        }
        app::IKPostprocessPlayer__Class** type_info = &type_info_ref;
        inline app::IKPostprocessPlayer__Class* get_class() {
            return il2cpp::get_class<app::IKPostprocessPlayer__Class>(type_info, "Moon.Timeline", "IKPostprocessPlayer");
        }
        inline app::IKPostprocessPlayer* create() {
            return il2cpp::create_object<app::IKPostprocessPlayer>(get_class());
        }
    } // namespace IKPostprocessPlayer
} // namespace app::classes::types
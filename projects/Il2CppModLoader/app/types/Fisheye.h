#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Fisheye {
        namespace {
            app::Fisheye__Class* type_info_ref = nullptr;
        }
        app::Fisheye__Class** type_info = &type_info_ref;
        inline app::Fisheye__Class* get_class() {
            return il2cpp::get_class<app::Fisheye__Class>(type_info, "UnityStandardAssets.ImageEffects", "Fisheye");
        }
        inline app::Fisheye* create() {
            return il2cpp::create_object<app::Fisheye>(get_class());
        }
    } // namespace Fisheye
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitFlash3D_Flash__Array {
        namespace {
            app::HitFlash3D_Flash__Array__Class* type_info_ref = nullptr;
        }
        app::HitFlash3D_Flash__Array__Class** type_info = &type_info_ref;
        inline app::HitFlash3D_Flash__Array__Class* get_class() {
            return il2cpp::get_class<app::HitFlash3D_Flash__Array__Class>(type_info, "", "HitFlash3D+Flash[]");
        }
        inline app::HitFlash3D_Flash__Array* create() {
            return il2cpp::create_object<app::HitFlash3D_Flash__Array>(get_class());
        }
    } // namespace HitFlash3D_Flash__Array
} // namespace app::classes::types

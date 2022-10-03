#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootingSpiderSounds {
        namespace {
            app::ShootingSpiderSounds__Class* type_info_ref = nullptr;
        }
        app::ShootingSpiderSounds__Class** type_info = &type_info_ref;
        inline app::ShootingSpiderSounds__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderSounds__Class>(type_info, "", "ShootingSpiderSounds");
        }
        inline app::ShootingSpiderSounds* create() {
            return il2cpp::create_object<app::ShootingSpiderSounds>(get_class());
        }
    } // namespace ShootingSpiderSounds
} // namespace app::classes::types

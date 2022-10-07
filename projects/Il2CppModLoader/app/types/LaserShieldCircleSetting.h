#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShieldCircleSetting {
        namespace {
            app::LaserShieldCircleSetting__Class* type_info_ref = nullptr;
        }
        app::LaserShieldCircleSetting__Class** type_info = &type_info_ref;
        inline app::LaserShieldCircleSetting__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldCircleSetting__Class>(type_info, "", "LaserShieldCircleSetting");
        }
        inline app::LaserShieldCircleSetting* create() {
            return il2cpp::create_object<app::LaserShieldCircleSetting>(get_class());
        }
    } // namespace LaserShieldCircleSetting
} // namespace app::classes::types
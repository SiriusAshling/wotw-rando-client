#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AirLocomotion {
        namespace {
            app::AirLocomotion__Class* type_info_ref = nullptr;
        }
        app::AirLocomotion__Class** type_info = &type_info_ref;
        inline app::AirLocomotion__Class* get_class() {
            return il2cpp::get_class<app::AirLocomotion__Class>(type_info, "", "AirLocomotion");
        }
        inline app::AirLocomotion* create() {
            return il2cpp::create_object<app::AirLocomotion>(get_class());
        }
    } // namespace AirLocomotion
} // namespace app::classes::types
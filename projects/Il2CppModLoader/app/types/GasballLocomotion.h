#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballLocomotion {
        namespace {
            app::GasballLocomotion__Class* type_info_ref = nullptr;
        }
        app::GasballLocomotion__Class** type_info = &type_info_ref;
        inline app::GasballLocomotion__Class* get_class() {
            return il2cpp::get_class<app::GasballLocomotion__Class>(type_info, "Moon", "GasballLocomotion");
        }
        inline app::GasballLocomotion* create() {
            return il2cpp::create_object<app::GasballLocomotion>(get_class());
        }
    } // namespace GasballLocomotion
} // namespace app::classes::types

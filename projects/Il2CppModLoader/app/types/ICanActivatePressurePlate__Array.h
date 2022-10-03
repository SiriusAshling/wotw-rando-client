#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICanActivatePressurePlate__Array {
        namespace {
            app::ICanActivatePressurePlate__Array__Class* type_info_ref = nullptr;
        }
        app::ICanActivatePressurePlate__Array__Class** type_info = &type_info_ref;
        inline app::ICanActivatePressurePlate__Array__Class* get_class() {
            return il2cpp::get_class<app::ICanActivatePressurePlate__Array__Class>(type_info, "", "ICanActivatePressurePlate[]");
        }
        inline app::ICanActivatePressurePlate__Array* create() {
            return il2cpp::create_object<app::ICanActivatePressurePlate__Array>(get_class());
        }
    } // namespace ICanActivatePressurePlate__Array
} // namespace app::classes::types

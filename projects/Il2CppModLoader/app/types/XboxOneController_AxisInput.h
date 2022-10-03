#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneController_AxisInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneController_AxisInput__Class** type_info;
        inline app::XboxOneController_AxisInput__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneController_AxisInput__Class>(type_info, "", "XboxOneController", "AxisInput");
        }
        inline app::XboxOneController_AxisInput* create() {
            return il2cpp::create_object<app::XboxOneController_AxisInput>(get_class());
        }
    } // namespace XboxOneController_AxisInput
} // namespace app::classes::types

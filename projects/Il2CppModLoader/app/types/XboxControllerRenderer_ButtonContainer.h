#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxControllerRenderer_ButtonContainer {
        namespace {
            app::XboxControllerRenderer_ButtonContainer__Class* type_info_ref = nullptr;
        }
        app::XboxControllerRenderer_ButtonContainer__Class** type_info = &type_info_ref;
        inline app::XboxControllerRenderer_ButtonContainer__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerRenderer_ButtonContainer__Class>(type_info, "", "XboxControllerRenderer", "ButtonContainer");
        }
        inline app::XboxControllerRenderer_ButtonContainer* create() {
            return il2cpp::create_object<app::XboxControllerRenderer_ButtonContainer>(get_class());
        }
        inline app::XboxControllerRenderer_ButtonContainer__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxControllerRenderer_ButtonContainer__Array>(get_class(), size);
        }
    } // namespace XboxControllerRenderer_ButtonContainer
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverValueSlider {
        namespace {
            app::CleverValueSlider__Class* type_info_ref = nullptr;
        }
        app::CleverValueSlider__Class** type_info = &type_info_ref;
        inline app::CleverValueSlider__Class* get_class() {
            return il2cpp::get_class<app::CleverValueSlider__Class>(type_info, "", "CleverValueSlider");
        }
        inline app::CleverValueSlider* create() {
            return il2cpp::create_object<app::CleverValueSlider>(get_class());
        }
    } // namespace CleverValueSlider
} // namespace app::classes::types
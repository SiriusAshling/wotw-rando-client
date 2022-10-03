#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorAnimator_ColorType__Enum {
        namespace {
            app::ColorAnimator_ColorType__Enum__Class* type_info_ref = nullptr;
        }
        app::ColorAnimator_ColorType__Enum__Class** type_info = &type_info_ref;
        inline app::ColorAnimator_ColorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorAnimator_ColorType__Enum__Class>(type_info, "Moon.Timeline", "ColorAnimator", "ColorType");
        }
        inline app::ColorAnimator_ColorType__Enum* create() {
            return il2cpp::create_object<app::ColorAnimator_ColorType__Enum>(get_class());
        }
    } // namespace ColorAnimator_ColorType__Enum
} // namespace app::classes::types

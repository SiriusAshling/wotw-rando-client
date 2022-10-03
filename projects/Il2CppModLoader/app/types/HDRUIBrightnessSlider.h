#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HDRUIBrightnessSlider {
        namespace {
            app::HDRUIBrightnessSlider__Class* type_info_ref = nullptr;
        }
        app::HDRUIBrightnessSlider__Class** type_info = &type_info_ref;
        inline app::HDRUIBrightnessSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRUIBrightnessSlider__Class>(type_info, "", "HDRUIBrightnessSlider");
        }
        inline app::HDRUIBrightnessSlider* create() {
            return il2cpp::create_object<app::HDRUIBrightnessSlider>(get_class());
        }
    } // namespace HDRUIBrightnessSlider
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DRSDownscaleSlider {
        namespace {
            app::DRSDownscaleSlider__Class* type_info_ref = nullptr;
        }
        app::DRSDownscaleSlider__Class** type_info = &type_info_ref;
        inline app::DRSDownscaleSlider__Class* get_class() {
            return il2cpp::get_class<app::DRSDownscaleSlider__Class>(type_info, "", "DRSDownscaleSlider");
        }
        inline app::DRSDownscaleSlider* create() {
            return il2cpp::create_object<app::DRSDownscaleSlider>(get_class());
        }
    } // namespace DRSDownscaleSlider
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvasShadingZone {
        namespace {
            app::LightCanvasShadingZone__Class* type_info_ref = nullptr;
        }
        app::LightCanvasShadingZone__Class** type_info = &type_info_ref;
        inline app::LightCanvasShadingZone__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasShadingZone__Class>(type_info, "", "LightCanvasShadingZone");
        }
        inline app::LightCanvasShadingZone* create() {
            return il2cpp::create_object<app::LightCanvasShadingZone>(get_class());
        }
    } // namespace LightCanvasShadingZone
} // namespace app::classes::types

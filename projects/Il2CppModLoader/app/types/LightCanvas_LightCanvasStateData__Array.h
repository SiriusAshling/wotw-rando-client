#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_LightCanvasStateData__Array {
        namespace {
            app::LightCanvas_LightCanvasStateData__Array__Class* type_info_ref = nullptr;
        }
        app::LightCanvas_LightCanvasStateData__Array__Class** type_info = &type_info_ref;
        inline app::LightCanvas_LightCanvasStateData__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvas_LightCanvasStateData__Array__Class>(type_info, "", "LightCanvas+LightCanvasStateData[]");
        }
        inline app::LightCanvas_LightCanvasStateData__Array* create() {
            return il2cpp::create_object<app::LightCanvas_LightCanvasStateData__Array>(get_class());
        }
    } // namespace LightCanvas_LightCanvasStateData__Array
} // namespace app::classes::types
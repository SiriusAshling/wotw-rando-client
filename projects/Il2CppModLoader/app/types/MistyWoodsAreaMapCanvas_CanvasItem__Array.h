#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsAreaMapCanvas_CanvasItem__Array {
        namespace {
            app::MistyWoodsAreaMapCanvas_CanvasItem__Array__Class* type_info_ref = nullptr;
        }
        app::MistyWoodsAreaMapCanvas_CanvasItem__Array__Class** type_info = &type_info_ref;
        inline app::MistyWoodsAreaMapCanvas_CanvasItem__Array__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsAreaMapCanvas_CanvasItem__Array__Class>(type_info, "", "MistyWoodsAreaMapCanvas+CanvasItem[]");
        }
        inline app::MistyWoodsAreaMapCanvas_CanvasItem__Array* create() {
            return il2cpp::create_object<app::MistyWoodsAreaMapCanvas_CanvasItem__Array>(get_class());
        }
    } // namespace MistyWoodsAreaMapCanvas_CanvasItem__Array
} // namespace app::classes::types
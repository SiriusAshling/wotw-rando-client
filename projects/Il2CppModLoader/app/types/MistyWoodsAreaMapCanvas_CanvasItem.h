#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsAreaMapCanvas_CanvasItem {
        namespace {
            app::MistyWoodsAreaMapCanvas_CanvasItem__Class* type_info_ref = nullptr;
        }
        app::MistyWoodsAreaMapCanvas_CanvasItem__Class** type_info = &type_info_ref;
        inline app::MistyWoodsAreaMapCanvas_CanvasItem__Class* get_class() {
            return il2cpp::get_nested_class<app::MistyWoodsAreaMapCanvas_CanvasItem__Class>(type_info, "", "MistyWoodsAreaMapCanvas", "CanvasItem");
        }
        inline app::MistyWoodsAreaMapCanvas_CanvasItem* create() {
            return il2cpp::create_object<app::MistyWoodsAreaMapCanvas_CanvasItem>(get_class());
        }
        inline app::MistyWoodsAreaMapCanvas_CanvasItem__Array* create_array(int size) {
            return il2cpp::array_new<app::MistyWoodsAreaMapCanvas_CanvasItem__Array>(get_class(), size);
        }
    } // namespace MistyWoodsAreaMapCanvas_CanvasItem
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_BrushPreview__Array {
        namespace {
            app::P3D_BrushPreview__Array__Class* type_info_ref = nullptr;
        }
        app::P3D_BrushPreview__Array__Class** type_info = &type_info_ref;
        inline app::P3D_BrushPreview__Array__Class* get_class() {
            return il2cpp::get_class<app::P3D_BrushPreview__Array__Class>(type_info, "", "P3D_BrushPreview[]");
        }
        inline app::P3D_BrushPreview__Array* create() {
            return il2cpp::create_object<app::P3D_BrushPreview__Array>(get_class());
        }
    } // namespace P3D_BrushPreview__Array
} // namespace app::classes::types
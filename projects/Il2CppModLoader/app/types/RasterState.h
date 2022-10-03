#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RasterState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RasterState__Class** type_info;
        inline app::RasterState__Class* get_class() {
            return il2cpp::get_class<app::RasterState__Class>(type_info, "UnityEngine.Experimental.Rendering", "RasterState");
        }
        inline app::RasterState* create() {
            return il2cpp::create_object<app::RasterState>(get_class());
        }
        inline app::RasterState__Boxed* box(app::RasterState value) {
            return il2cpp::box_value<app::RasterState__Boxed>(get_class(), value);
        }
    } // namespace RasterState
} // namespace app::classes::types

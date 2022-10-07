#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TileData {
        namespace {
            app::TileData__Class* type_info_ref = nullptr;
        }
        app::TileData__Class** type_info = &type_info_ref;
        inline app::TileData__Class* get_class() {
            return il2cpp::get_class<app::TileData__Class>(type_info, "UnityEngine.Tilemaps", "TileData");
        }
        inline app::TileData* create() {
            return il2cpp::create_object<app::TileData>(get_class());
        }
        inline app::TileData__Boxed* box(app::TileData value) {
            return il2cpp::box_value<app::TileData__Boxed>(get_class(), value);
        }
    } // namespace TileData
} // namespace app::classes::types
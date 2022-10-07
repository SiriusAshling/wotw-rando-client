#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TerrainData {
        namespace {
            app::TerrainData__Class* type_info_ref = nullptr;
        }
        app::TerrainData__Class** type_info = &type_info_ref;
        inline app::TerrainData__Class* get_class() {
            return il2cpp::get_class<app::TerrainData__Class>(type_info, "Moon", "TerrainData");
        }
        inline app::TerrainData* create() {
            return il2cpp::create_object<app::TerrainData>(get_class());
        }
    } // namespace TerrainData
} // namespace app::classes::types
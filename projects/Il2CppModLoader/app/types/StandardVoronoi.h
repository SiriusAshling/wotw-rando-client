#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StandardVoronoi {
        namespace {
            app::StandardVoronoi__Class* type_info_ref = nullptr;
        }
        app::StandardVoronoi__Class** type_info = &type_info_ref;
        inline app::StandardVoronoi__Class* get_class() {
            return il2cpp::get_class<app::StandardVoronoi__Class>(type_info, "TriangleNet.Voronoi", "StandardVoronoi");
        }
        inline app::StandardVoronoi* create() {
            return il2cpp::create_object<app::StandardVoronoi>(get_class());
        }
    } // namespace StandardVoronoi
} // namespace app::classes::types

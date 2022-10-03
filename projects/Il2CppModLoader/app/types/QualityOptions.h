#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QualityOptions {
        namespace {
            app::QualityOptions__Class* type_info_ref = nullptr;
        }
        app::QualityOptions__Class** type_info = &type_info_ref;
        inline app::QualityOptions__Class* get_class() {
            return il2cpp::get_class<app::QualityOptions__Class>(type_info, "TriangleNet.Meshing", "QualityOptions");
        }
        inline app::QualityOptions* create() {
            return il2cpp::create_object<app::QualityOptions>(get_class());
        }
    } // namespace QualityOptions
} // namespace app::classes::types

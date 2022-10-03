#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerDistortedModifier {
        namespace {
            app::MultiplyLayerDistortedModifier__Class* type_info_ref = nullptr;
        }
        app::MultiplyLayerDistortedModifier__Class** type_info = &type_info_ref;
        inline app::MultiplyLayerDistortedModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerDistortedModifier__Class>(type_info, "", "MultiplyLayerDistortedModifier");
        }
        inline app::MultiplyLayerDistortedModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerDistortedModifier>(get_class());
        }
    } // namespace MultiplyLayerDistortedModifier
} // namespace app::classes::types

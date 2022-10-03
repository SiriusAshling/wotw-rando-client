#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerDistortedThirdModifier {
        namespace {
            app::MultiplyLayerDistortedThirdModifier__Class* type_info_ref = nullptr;
        }
        app::MultiplyLayerDistortedThirdModifier__Class** type_info = &type_info_ref;
        inline app::MultiplyLayerDistortedThirdModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerDistortedThirdModifier__Class>(type_info, "", "MultiplyLayerDistortedThirdModifier");
        }
        inline app::MultiplyLayerDistortedThirdModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerDistortedThirdModifier>(get_class());
        }
    } // namespace MultiplyLayerDistortedThirdModifier
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AdditiveLayerModifier {
        namespace {
            app::AdditiveLayerModifier__Class* type_info_ref = nullptr;
        }
        app::AdditiveLayerModifier__Class** type_info = &type_info_ref;
        inline app::AdditiveLayerModifier__Class* get_class() {
            return il2cpp::get_class<app::AdditiveLayerModifier__Class>(type_info, "", "AdditiveLayerModifier");
        }
        inline app::AdditiveLayerModifier* create() {
            return il2cpp::create_object<app::AdditiveLayerModifier>(get_class());
        }
    } // namespace AdditiveLayerModifier
} // namespace app::classes::types
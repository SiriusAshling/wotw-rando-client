#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightMaskModifier {
        namespace {
            app::SpiritLightMaskModifier__Class* type_info_ref = nullptr;
        }
        app::SpiritLightMaskModifier__Class** type_info = &type_info_ref;
        inline app::SpiritLightMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightMaskModifier__Class>(type_info, "", "SpiritLightMaskModifier");
        }
        inline app::SpiritLightMaskModifier* create() {
            return il2cpp::create_object<app::SpiritLightMaskModifier>(get_class());
        }
    } // namespace SpiritLightMaskModifier
} // namespace app::classes::types
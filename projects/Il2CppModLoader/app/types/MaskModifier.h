#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskModifier {
        namespace {
            app::MaskModifier__Class* type_info_ref = nullptr;
        }
        app::MaskModifier__Class** type_info = &type_info_ref;
        inline app::MaskModifier__Class* get_class() {
            return il2cpp::get_class<app::MaskModifier__Class>(type_info, "", "MaskModifier");
        }
        inline app::MaskModifier* create() {
            return il2cpp::create_object<app::MaskModifier>(get_class());
        }
    } // namespace MaskModifier
} // namespace app::classes::types
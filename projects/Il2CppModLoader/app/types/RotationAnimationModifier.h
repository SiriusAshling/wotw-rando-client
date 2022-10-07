#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationAnimationModifier {
        namespace {
            app::RotationAnimationModifier__Class* type_info_ref = nullptr;
        }
        app::RotationAnimationModifier__Class** type_info = &type_info_ref;
        inline app::RotationAnimationModifier__Class* get_class() {
            return il2cpp::get_class<app::RotationAnimationModifier__Class>(type_info, "", "RotationAnimationModifier");
        }
        inline app::RotationAnimationModifier* create() {
            return il2cpp::create_object<app::RotationAnimationModifier>(get_class());
        }
    } // namespace RotationAnimationModifier
} // namespace app::classes::types
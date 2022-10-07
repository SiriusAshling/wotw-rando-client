#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightCapsuleVisualAffector__Array {
        namespace {
            app::SpiritLightCapsuleVisualAffector__Array__Class* type_info_ref = nullptr;
        }
        app::SpiritLightCapsuleVisualAffector__Array__Class** type_info = &type_info_ref;
        inline app::SpiritLightCapsuleVisualAffector__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightCapsuleVisualAffector__Array__Class>(type_info, "", "SpiritLightCapsuleVisualAffector[]");
        }
        inline app::SpiritLightCapsuleVisualAffector__Array* create() {
            return il2cpp::create_object<app::SpiritLightCapsuleVisualAffector__Array>(get_class());
        }
    } // namespace SpiritLightCapsuleVisualAffector__Array
} // namespace app::classes::types
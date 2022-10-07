#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MotionAbsorb_Absorber__Array {
        namespace {
            app::MotionAbsorb_Absorber__Array__Class* type_info_ref = nullptr;
        }
        app::MotionAbsorb_Absorber__Array__Class** type_info = &type_info_ref;
        inline app::MotionAbsorb_Absorber__Array__Class* get_class() {
            return il2cpp::get_class<app::MotionAbsorb_Absorber__Array__Class>(type_info, "RootMotion.Demos", "MotionAbsorb+Absorber[]");
        }
        inline app::MotionAbsorb_Absorber__Array* create() {
            return il2cpp::create_object<app::MotionAbsorb_Absorber__Array>(get_class());
        }
    } // namespace MotionAbsorb_Absorber__Array
} // namespace app::classes::types
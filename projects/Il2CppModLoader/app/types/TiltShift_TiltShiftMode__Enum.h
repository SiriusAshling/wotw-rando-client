#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TiltShift_TiltShiftMode__Enum {
        namespace {
            app::TiltShift_TiltShiftMode__Enum__Class* type_info_ref = nullptr;
        }
        app::TiltShift_TiltShiftMode__Enum__Class** type_info = &type_info_ref;
        inline app::TiltShift_TiltShiftMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TiltShift_TiltShiftMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "TiltShift", "TiltShiftMode");
        }
        inline app::TiltShift_TiltShiftMode__Enum* create() {
            return il2cpp::create_object<app::TiltShift_TiltShiftMode__Enum>(get_class());
        }
    } // namespace TiltShift_TiltShiftMode__Enum
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SinMovement_Affect_AffectType__Enum {
        namespace {
            app::SinMovement_Affect_AffectType__Enum__Class* type_info_ref = nullptr;
        }
        app::SinMovement_Affect_AffectType__Enum__Class** type_info = &type_info_ref;
        inline app::SinMovement_Affect_AffectType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SinMovement_Affect_AffectType__Enum__Class>(type_info, "", "SinMovement+Affect", "AffectType");
        }
        inline app::SinMovement_Affect_AffectType__Enum* create() {
            return il2cpp::create_object<app::SinMovement_Affect_AffectType__Enum>(get_class());
        }
    } // namespace SinMovement_Affect_AffectType__Enum
} // namespace app::classes::types
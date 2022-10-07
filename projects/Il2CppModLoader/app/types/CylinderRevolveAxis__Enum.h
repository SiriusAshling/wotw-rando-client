#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CylinderRevolveAxis__Enum {
        namespace {
            app::CylinderRevolveAxis__Enum__Class* type_info_ref = nullptr;
        }
        app::CylinderRevolveAxis__Enum__Class** type_info = &type_info_ref;
        inline app::CylinderRevolveAxis__Enum__Class* get_class() {
            return il2cpp::get_class<app::CylinderRevolveAxis__Enum__Class>(type_info, "CatlikeCoding.TextBox", "CylinderRevolveAxis");
        }
        inline app::CylinderRevolveAxis__Enum* create() {
            return il2cpp::create_object<app::CylinderRevolveAxis__Enum>(get_class());
        }
    } // namespace CylinderRevolveAxis__Enum
} // namespace app::classes::types
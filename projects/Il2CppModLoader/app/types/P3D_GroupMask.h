#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_GroupMask {
        namespace {
            app::P3D_GroupMask__Class* type_info_ref = nullptr;
        }
        app::P3D_GroupMask__Class** type_info = &type_info_ref;
        inline app::P3D_GroupMask__Class* get_class() {
            return il2cpp::get_class<app::P3D_GroupMask__Class>(type_info, "", "P3D_GroupMask");
        }
        inline app::P3D_GroupMask* create() {
            return il2cpp::create_object<app::P3D_GroupMask>(get_class());
        }
        inline app::P3D_GroupMask__Boxed* box(app::P3D_GroupMask value) {
            return il2cpp::box_value<app::P3D_GroupMask__Boxed>(get_class(), value);
        }
    } // namespace P3D_GroupMask
} // namespace app::classes::types

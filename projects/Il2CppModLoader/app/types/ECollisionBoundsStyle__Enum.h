#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ECollisionBoundsStyle__Enum {
        namespace {
            app::ECollisionBoundsStyle__Enum__Class* type_info_ref = nullptr;
        }
        app::ECollisionBoundsStyle__Enum__Class** type_info = &type_info_ref;
        inline app::ECollisionBoundsStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::ECollisionBoundsStyle__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ECollisionBoundsStyle");
        }
        inline app::ECollisionBoundsStyle__Enum* create() {
            return il2cpp::create_object<app::ECollisionBoundsStyle__Enum>(get_class());
        }
    } // namespace ECollisionBoundsStyle__Enum
} // namespace app::classes::types

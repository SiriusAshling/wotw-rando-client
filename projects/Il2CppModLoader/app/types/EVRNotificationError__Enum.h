#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRNotificationError__Enum {
        namespace {
            app::EVRNotificationError__Enum__Class* type_info_ref = nullptr;
        }
        app::EVRNotificationError__Enum__Class** type_info = &type_info_ref;
        inline app::EVRNotificationError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRNotificationError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRNotificationError");
        }
        inline app::EVRNotificationError__Enum* create() {
            return il2cpp::create_object<app::EVRNotificationError__Enum>(get_class());
        }
    } // namespace EVRNotificationError__Enum
} // namespace app::classes::types

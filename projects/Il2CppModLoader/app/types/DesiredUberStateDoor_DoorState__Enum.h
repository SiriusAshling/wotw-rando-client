#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateDoor_DoorState__Enum {
        namespace {
            app::DesiredUberStateDoor_DoorState__Enum__Class* type_info_ref = nullptr;
        }
        app::DesiredUberStateDoor_DoorState__Enum__Class** type_info = &type_info_ref;
        inline app::DesiredUberStateDoor_DoorState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DesiredUberStateDoor_DoorState__Enum__Class>(type_info, "", "DesiredUberStateDoor", "DoorState");
        }
        inline app::DesiredUberStateDoor_DoorState__Enum* create() {
            return il2cpp::create_object<app::DesiredUberStateDoor_DoorState__Enum>(get_class());
        }
    } // namespace DesiredUberStateDoor_DoorState__Enum
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyDoorWithSlots_State__Enum {
        namespace {
            app::LegacyDoorWithSlots_State__Enum__Class* type_info_ref = nullptr;
        }
        app::LegacyDoorWithSlots_State__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyDoorWithSlots_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyDoorWithSlots_State__Enum__Class>(type_info, "", "LegacyDoorWithSlots", "State");
        }
        inline app::LegacyDoorWithSlots_State__Enum* create() {
            return il2cpp::create_object<app::LegacyDoorWithSlots_State__Enum>(get_class());
        }
    } // namespace LegacyDoorWithSlots_State__Enum
} // namespace app::classes::types

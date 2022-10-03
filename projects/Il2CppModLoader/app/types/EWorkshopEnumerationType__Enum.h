#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EWorkshopEnumerationType__Enum {
        namespace {
            app::EWorkshopEnumerationType__Enum__Class* type_info_ref = nullptr;
        }
        app::EWorkshopEnumerationType__Enum__Class** type_info = &type_info_ref;
        inline app::EWorkshopEnumerationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EWorkshopEnumerationType__Enum__Class>(type_info, "Steamworks", "EWorkshopEnumerationType");
        }
        inline app::EWorkshopEnumerationType__Enum* create() {
            return il2cpp::create_object<app::EWorkshopEnumerationType__Enum>(get_class());
        }
    } // namespace EWorkshopEnumerationType__Enum
} // namespace app::classes::types

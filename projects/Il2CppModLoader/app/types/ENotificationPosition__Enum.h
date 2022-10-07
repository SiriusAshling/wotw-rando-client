#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ENotificationPosition__Enum {
        namespace {
            app::ENotificationPosition__Enum__Class* type_info_ref = nullptr;
        }
        app::ENotificationPosition__Enum__Class** type_info = &type_info_ref;
        inline app::ENotificationPosition__Enum__Class* get_class() {
            return il2cpp::get_class<app::ENotificationPosition__Enum__Class>(type_info, "Steamworks", "ENotificationPosition");
        }
        inline app::ENotificationPosition__Enum* create() {
            return il2cpp::create_object<app::ENotificationPosition__Enum>(get_class());
        }
    } // namespace ENotificationPosition__Enum
} // namespace app::classes::types
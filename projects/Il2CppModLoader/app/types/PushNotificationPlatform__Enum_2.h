#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PushNotificationPlatform__Enum_2 {
        namespace {
            app::PushNotificationPlatform__Enum_2__Class* type_info_ref = nullptr;
        }
        app::PushNotificationPlatform__Enum_2__Class** type_info = &type_info_ref;
        inline app::PushNotificationPlatform__Enum_2__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationPlatform__Enum_2__Class>(type_info, "PlayFab.PlayStreamModels", "PushNotificationPlatform");
        }
        inline app::PushNotificationPlatform__Enum_2* create() {
            return il2cpp::create_object<app::PushNotificationPlatform__Enum_2>(get_class());
        }
    } // namespace PushNotificationPlatform__Enum_2
} // namespace app::classes::types

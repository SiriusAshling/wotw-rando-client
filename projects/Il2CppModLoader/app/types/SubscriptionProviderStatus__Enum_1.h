#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubscriptionProviderStatus__Enum_1 {
        namespace {
            app::SubscriptionProviderStatus__Enum_1__Class* type_info_ref = nullptr;
        }
        app::SubscriptionProviderStatus__Enum_1__Class** type_info = &type_info_ref;
        inline app::SubscriptionProviderStatus__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionProviderStatus__Enum_1__Class>(type_info, "PlayFab.ServerModels", "SubscriptionProviderStatus");
        }
        inline app::SubscriptionProviderStatus__Enum_1* create() {
            return il2cpp::create_object<app::SubscriptionProviderStatus__Enum_1>(get_class());
        }
    } // namespace SubscriptionProviderStatus__Enum_1
} // namespace app::classes::types

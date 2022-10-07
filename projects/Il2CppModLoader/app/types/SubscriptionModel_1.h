#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubscriptionModel_1 {
        namespace {
            app::SubscriptionModel_1__Class* type_info_ref = nullptr;
        }
        app::SubscriptionModel_1__Class** type_info = &type_info_ref;
        inline app::SubscriptionModel_1__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionModel_1__Class>(type_info, "PlayFab.ServerModels", "SubscriptionModel");
        }
        inline app::SubscriptionModel_1* create() {
            return il2cpp::create_object<app::SubscriptionModel_1>(get_class());
        }
        inline app::SubscriptionModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::SubscriptionModel_1__Array>(get_class(), size);
        }
        inline app::SubscriptionModel_1__Array* create_array(const std::vector<app::SubscriptionModel_1*>& items) {
            return il2cpp::array_new<app::SubscriptionModel_1__Array>(get_class(), items);
        }
    } // namespace SubscriptionModel_1
} // namespace app::classes::types
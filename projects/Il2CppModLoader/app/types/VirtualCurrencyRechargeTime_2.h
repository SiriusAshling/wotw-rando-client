#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualCurrencyRechargeTime_2 {
        namespace {
            app::VirtualCurrencyRechargeTime_2__Class* type_info_ref = nullptr;
        }
        app::VirtualCurrencyRechargeTime_2__Class** type_info = &type_info_ref;
        inline app::VirtualCurrencyRechargeTime_2__Class* get_class() {
            return il2cpp::get_class<app::VirtualCurrencyRechargeTime_2__Class>(type_info, "PlayFab.ServerModels", "VirtualCurrencyRechargeTime");
        }
        inline app::VirtualCurrencyRechargeTime_2* create() {
            return il2cpp::create_object<app::VirtualCurrencyRechargeTime_2>(get_class());
        }
        inline app::VirtualCurrencyRechargeTime_2__Array* create_array(int size) {
            return il2cpp::array_new<app::VirtualCurrencyRechargeTime_2__Array>(get_class(), size);
        }
    } // namespace VirtualCurrencyRechargeTime_2
} // namespace app::classes::types

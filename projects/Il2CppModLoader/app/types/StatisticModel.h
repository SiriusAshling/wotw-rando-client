#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StatisticModel__Class** type_info;
        inline app::StatisticModel__Class* get_class() {
            return il2cpp::get_class<app::StatisticModel__Class>(type_info, "PlayFab.ClientModels", "StatisticModel");
        }
        inline app::StatisticModel* create() {
            return il2cpp::create_object<app::StatisticModel>(get_class());
        }
        inline app::StatisticModel__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticModel__Array>(get_class(), size);
        }
        inline app::StatisticModel__Array* create_array(const std::vector<app::StatisticModel*>& items) {
            return il2cpp::array_new<app::StatisticModel__Array>(get_class(), items);
        }
    } // namespace StatisticModel
} // namespace app::classes::types
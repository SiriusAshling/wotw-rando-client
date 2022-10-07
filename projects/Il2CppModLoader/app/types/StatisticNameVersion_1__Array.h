#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticNameVersion_1__Array {
        namespace {
            app::StatisticNameVersion_1__Array__Class* type_info_ref = nullptr;
        }
        app::StatisticNameVersion_1__Array__Class** type_info = &type_info_ref;
        inline app::StatisticNameVersion_1__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticNameVersion_1__Array__Class>(type_info, "PlayFab.ServerModels", "StatisticNameVersion[]");
        }
        inline app::StatisticNameVersion_1__Array* create() {
            return il2cpp::create_object<app::StatisticNameVersion_1__Array>(get_class());
        }
    } // namespace StatisticNameVersion_1__Array
} // namespace app::classes::types
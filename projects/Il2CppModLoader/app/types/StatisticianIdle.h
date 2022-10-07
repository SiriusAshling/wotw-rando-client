#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticianIdle {
        namespace {
            app::StatisticianIdle__Class* type_info_ref = nullptr;
        }
        app::StatisticianIdle__Class** type_info = &type_info_ref;
        inline app::StatisticianIdle__Class* get_class() {
            return il2cpp::get_class<app::StatisticianIdle__Class>(type_info, "", "StatisticianIdle");
        }
        inline app::StatisticianIdle* create() {
            return il2cpp::create_object<app::StatisticianIdle>(get_class());
        }
    } // namespace StatisticianIdle
} // namespace app::classes::types
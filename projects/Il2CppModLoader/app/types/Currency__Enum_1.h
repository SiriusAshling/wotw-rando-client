#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Currency__Enum_1 {
        namespace {
            app::Currency__Enum_1__Class* type_info_ref = nullptr;
        }
        app::Currency__Enum_1__Class** type_info = &type_info_ref;
        inline app::Currency__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::Currency__Enum_1__Class>(type_info, "PlayFab.ServerModels", "Currency");
        }
        inline app::Currency__Enum_1* create() {
            return il2cpp::create_object<app::Currency__Enum_1>(get_class());
        }
    } // namespace Currency__Enum_1
} // namespace app::classes::types
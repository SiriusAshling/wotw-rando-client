#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserXboxInfo_1 {
        namespace {
            app::UserXboxInfo_1__Class* type_info_ref = nullptr;
        }
        app::UserXboxInfo_1__Class** type_info = &type_info_ref;
        inline app::UserXboxInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserXboxInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserXboxInfo");
        }
        inline app::UserXboxInfo_1* create() {
            return il2cpp::create_object<app::UserXboxInfo_1>(get_class());
        }
    } // namespace UserXboxInfo_1
} // namespace app::classes::types
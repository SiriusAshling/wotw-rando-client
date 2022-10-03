#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserDataRecord__Array {
        namespace {
            app::UserDataRecord__Array__Class* type_info_ref = nullptr;
        }
        app::UserDataRecord__Array__Class** type_info = &type_info_ref;
        inline app::UserDataRecord__Array__Class* get_class() {
            return il2cpp::get_class<app::UserDataRecord__Array__Class>(type_info, "PlayFab.ClientModels", "UserDataRecord[]");
        }
        inline app::UserDataRecord__Array* create() {
            return il2cpp::create_object<app::UserDataRecord__Array>(get_class());
        }
    } // namespace UserDataRecord__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResultTableNodeType__Enum {
        namespace {
            app::ResultTableNodeType__Enum__Class* type_info_ref = nullptr;
        }
        app::ResultTableNodeType__Enum__Class** type_info = &type_info_ref;
        inline app::ResultTableNodeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ResultTableNodeType__Enum__Class>(type_info, "PlayFab.ServerModels", "ResultTableNodeType");
        }
        inline app::ResultTableNodeType__Enum* create() {
            return il2cpp::create_object<app::ResultTableNodeType__Enum>(get_class());
        }
    } // namespace ResultTableNodeType__Enum
} // namespace app::classes::types
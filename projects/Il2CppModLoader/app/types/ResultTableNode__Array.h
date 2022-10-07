#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResultTableNode__Array {
        namespace {
            app::ResultTableNode__Array__Class* type_info_ref = nullptr;
        }
        app::ResultTableNode__Array__Class** type_info = &type_info_ref;
        inline app::ResultTableNode__Array__Class* get_class() {
            return il2cpp::get_class<app::ResultTableNode__Array__Class>(type_info, "PlayFab.ServerModels", "ResultTableNode[]");
        }
        inline app::ResultTableNode__Array* create() {
            return il2cpp::create_object<app::ResultTableNode__Array>(get_class());
        }
    } // namespace ResultTableNode__Array
} // namespace app::classes::types
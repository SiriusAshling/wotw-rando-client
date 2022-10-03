#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResultTableNode {
        namespace {
            app::ResultTableNode__Class* type_info_ref = nullptr;
        }
        app::ResultTableNode__Class** type_info = &type_info_ref;
        inline app::ResultTableNode__Class* get_class() {
            return il2cpp::get_class<app::ResultTableNode__Class>(type_info, "PlayFab.ServerModels", "ResultTableNode");
        }
        inline app::ResultTableNode* create() {
            return il2cpp::create_object<app::ResultTableNode>(get_class());
        }
        inline app::ResultTableNode__Array* create_array(int size) {
            return il2cpp::array_new<app::ResultTableNode__Array>(get_class(), size);
        }
    } // namespace ResultTableNode
} // namespace app::classes::types

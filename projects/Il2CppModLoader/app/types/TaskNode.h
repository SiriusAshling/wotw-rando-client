#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskNode {
        namespace {
            app::TaskNode__Class* type_info_ref = nullptr;
        }
        app::TaskNode__Class** type_info = &type_info_ref;
        inline app::TaskNode__Class* get_class() {
            return il2cpp::get_class<app::TaskNode__Class>(type_info, "Moon.BehaviourSystem", "TaskNode");
        }
        inline app::TaskNode* create() {
            return il2cpp::create_object<app::TaskNode>(get_class());
        }
    } // namespace TaskNode
} // namespace app::classes::types

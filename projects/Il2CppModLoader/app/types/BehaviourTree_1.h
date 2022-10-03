#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourTree_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourTree_1__Class** type_info;
        inline app::BehaviourTree_1__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTree_1__Class>(type_info, "UberBehaviourTree", "BehaviourTree");
        }
        inline app::BehaviourTree_1* create() {
            return il2cpp::create_object<app::BehaviourTree_1>(get_class());
        }
    } // namespace BehaviourTree_1
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewGroundPatrolBehaviour {
        namespace {
            app::NewGroundPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        app::NewGroundPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::NewGroundPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::NewGroundPatrolBehaviour__Class>(type_info, "Moon", "NewGroundPatrolBehaviour");
        }
        inline app::NewGroundPatrolBehaviour* create() {
            return il2cpp::create_object<app::NewGroundPatrolBehaviour>(get_class());
        }
    } // namespace NewGroundPatrolBehaviour
} // namespace app::classes::types

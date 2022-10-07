#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HoldableRigidBody {
        namespace {
            app::HoldableRigidBody__Class* type_info_ref = nullptr;
        }
        app::HoldableRigidBody__Class** type_info = &type_info_ref;
        inline app::HoldableRigidBody__Class* get_class() {
            return il2cpp::get_class<app::HoldableRigidBody__Class>(type_info, "", "HoldableRigidBody");
        }
        inline app::HoldableRigidBody* create() {
            return il2cpp::create_object<app::HoldableRigidBody>(get_class());
        }
    } // namespace HoldableRigidBody
} // namespace app::classes::types
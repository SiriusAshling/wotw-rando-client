#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetVector3Action {
        namespace {
            app::SetVector3Action__Class* type_info_ref = nullptr;
        }
        app::SetVector3Action__Class** type_info = &type_info_ref;
        inline app::SetVector3Action__Class* get_class() {
            return il2cpp::get_class<app::SetVector3Action__Class>(type_info, "Moon.BehaviourSystem", "SetVector3Action");
        }
        inline app::SetVector3Action* create() {
            return il2cpp::create_object<app::SetVector3Action>(get_class());
        }
    } // namespace SetVector3Action
} // namespace app::classes::types
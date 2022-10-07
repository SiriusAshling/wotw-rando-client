#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetAnimatorPropertiesAction {
        namespace {
            app::SetAnimatorPropertiesAction__Class* type_info_ref = nullptr;
        }
        app::SetAnimatorPropertiesAction__Class** type_info = &type_info_ref;
        inline app::SetAnimatorPropertiesAction__Class* get_class() {
            return il2cpp::get_class<app::SetAnimatorPropertiesAction__Class>(type_info, "", "SetAnimatorPropertiesAction");
        }
        inline app::SetAnimatorPropertiesAction* create() {
            return il2cpp::create_object<app::SetAnimatorPropertiesAction>(get_class());
        }
    } // namespace SetAnimatorPropertiesAction
} // namespace app::classes::types
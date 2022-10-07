#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivationBasedOnCondition {
        namespace {
            app::ActivationBasedOnCondition__Class* type_info_ref = nullptr;
        }
        app::ActivationBasedOnCondition__Class** type_info = &type_info_ref;
        inline app::ActivationBasedOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ActivationBasedOnCondition__Class>(type_info, "", "ActivationBasedOnCondition");
        }
        inline app::ActivationBasedOnCondition* create() {
            return il2cpp::create_object<app::ActivationBasedOnCondition>(get_class());
        }
    } // namespace ActivationBasedOnCondition
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateCondition {
        namespace {
            app::StateCondition__Class* type_info_ref = nullptr;
        }
        app::StateCondition__Class** type_info = &type_info_ref;
        inline app::StateCondition__Class* get_class() {
            return il2cpp::get_class<app::StateCondition__Class>(type_info, "", "StateCondition");
        }
        inline app::StateCondition* create() {
            return il2cpp::create_object<app::StateCondition>(get_class());
        }
    } // namespace StateCondition
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeMultipleStatesOnCondition {
        namespace {
            app::ChangeMultipleStatesOnCondition__Class* type_info_ref = nullptr;
        }
        app::ChangeMultipleStatesOnCondition__Class** type_info = &type_info_ref;
        inline app::ChangeMultipleStatesOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ChangeMultipleStatesOnCondition__Class>(type_info, "Moon.Setups", "ChangeMultipleStatesOnCondition");
        }
        inline app::ChangeMultipleStatesOnCondition* create() {
            return il2cpp::create_object<app::ChangeMultipleStatesOnCondition>(get_class());
        }
    } // namespace ChangeMultipleStatesOnCondition
} // namespace app::classes::types
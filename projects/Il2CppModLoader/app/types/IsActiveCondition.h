#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsActiveCondition {
        namespace {
            app::IsActiveCondition__Class* type_info_ref = nullptr;
        }
        app::IsActiveCondition__Class** type_info = &type_info_ref;
        inline app::IsActiveCondition__Class* get_class() {
            return il2cpp::get_class<app::IsActiveCondition__Class>(type_info, "", "IsActiveCondition");
        }
        inline app::IsActiveCondition* create() {
            return il2cpp::create_object<app::IsActiveCondition>(get_class());
        }
    } // namespace IsActiveCondition
} // namespace app::classes::types

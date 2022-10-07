#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsLoadingInProgressCondition {
        namespace {
            app::IsLoadingInProgressCondition__Class* type_info_ref = nullptr;
        }
        app::IsLoadingInProgressCondition__Class** type_info = &type_info_ref;
        inline app::IsLoadingInProgressCondition__Class* get_class() {
            return il2cpp::get_class<app::IsLoadingInProgressCondition__Class>(type_info, "", "IsLoadingInProgressCondition");
        }
        inline app::IsLoadingInProgressCondition* create() {
            return il2cpp::create_object<app::IsLoadingInProgressCondition>(get_class());
        }
    } // namespace IsLoadingInProgressCondition
} // namespace app::classes::types
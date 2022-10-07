#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsFullyInstalledCondition {
        namespace {
            app::IsFullyInstalledCondition__Class* type_info_ref = nullptr;
        }
        app::IsFullyInstalledCondition__Class** type_info = &type_info_ref;
        inline app::IsFullyInstalledCondition__Class* get_class() {
            return il2cpp::get_class<app::IsFullyInstalledCondition__Class>(type_info, "", "IsFullyInstalledCondition");
        }
        inline app::IsFullyInstalledCondition* create() {
            return il2cpp::create_object<app::IsFullyInstalledCondition>(get_class());
        }
    } // namespace IsFullyInstalledCondition
} // namespace app::classes::types
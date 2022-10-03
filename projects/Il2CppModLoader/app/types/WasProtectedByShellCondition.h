#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WasProtectedByShellCondition {
        namespace {
            app::WasProtectedByShellCondition__Class* type_info_ref = nullptr;
        }
        app::WasProtectedByShellCondition__Class** type_info = &type_info_ref;
        inline app::WasProtectedByShellCondition__Class* get_class() {
            return il2cpp::get_class<app::WasProtectedByShellCondition__Class>(type_info, "", "WasProtectedByShellCondition");
        }
        inline app::WasProtectedByShellCondition* create() {
            return il2cpp::create_object<app::WasProtectedByShellCondition>(get_class());
        }
    } // namespace WasProtectedByShellCondition
} // namespace app::classes::types

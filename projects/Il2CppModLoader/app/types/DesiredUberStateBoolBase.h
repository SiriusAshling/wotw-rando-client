#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateBoolBase {
        namespace {
            app::DesiredUberStateBoolBase__Class* type_info_ref = nullptr;
        }
        app::DesiredUberStateBoolBase__Class** type_info = &type_info_ref;
        inline app::DesiredUberStateBoolBase__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateBoolBase__Class>(type_info, "", "DesiredUberStateBoolBase");
        }
        inline app::DesiredUberStateBoolBase* create() {
            return il2cpp::create_object<app::DesiredUberStateBoolBase>(get_class());
        }
    } // namespace DesiredUberStateBoolBase
} // namespace app::classes::types

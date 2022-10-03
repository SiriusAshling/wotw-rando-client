#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateBool__Array {
        namespace {
            app::DesiredUberStateBool__Array__Class* type_info_ref = nullptr;
        }
        app::DesiredUberStateBool__Array__Class** type_info = &type_info_ref;
        inline app::DesiredUberStateBool__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateBool__Array__Class>(type_info, "", "DesiredUberStateBool[]");
        }
        inline app::DesiredUberStateBool__Array* create() {
            return il2cpp::create_object<app::DesiredUberStateBool__Array>(get_class());
        }
    } // namespace DesiredUberStateBool__Array
} // namespace app::classes::types

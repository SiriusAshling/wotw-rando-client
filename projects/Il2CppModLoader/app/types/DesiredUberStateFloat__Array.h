#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateFloat__Array {
        namespace {
            app::DesiredUberStateFloat__Array__Class* type_info_ref = nullptr;
        }
        app::DesiredUberStateFloat__Array__Class** type_info = &type_info_ref;
        inline app::DesiredUberStateFloat__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateFloat__Array__Class>(type_info, "", "DesiredUberStateFloat[]");
        }
        inline app::DesiredUberStateFloat__Array* create() {
            return il2cpp::create_object<app::DesiredUberStateFloat__Array>(get_class());
        }
    } // namespace DesiredUberStateFloat__Array
} // namespace app::classes::types

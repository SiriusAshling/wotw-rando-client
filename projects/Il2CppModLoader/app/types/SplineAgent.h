#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SplineAgent {
        namespace {
            app::SplineAgent__Class* type_info_ref = nullptr;
        }
        app::SplineAgent__Class** type_info = &type_info_ref;
        inline app::SplineAgent__Class* get_class() {
            return il2cpp::get_class<app::SplineAgent__Class>(type_info, "", "SplineAgent");
        }
        inline app::SplineAgent* create() {
            return il2cpp::create_object<app::SplineAgent>(get_class());
        }
    } // namespace SplineAgent
} // namespace app::classes::types
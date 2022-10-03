#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InverseKinematicsSolver {
        namespace {
            app::InverseKinematicsSolver__Class* type_info_ref = nullptr;
        }
        app::InverseKinematicsSolver__Class** type_info = &type_info_ref;
        inline app::InverseKinematicsSolver__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsSolver__Class>(type_info, "Moon", "InverseKinematicsSolver");
        }
        inline app::InverseKinematicsSolver* create() {
            return il2cpp::create_object<app::InverseKinematicsSolver>(get_class());
        }
    } // namespace InverseKinematicsSolver
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolver_Point__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolver_Point__Array__Class** type_info;
        inline app::IKSolver_Point__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolver_Point__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolver+Point[]");
        }
        inline app::IKSolver_Point__Array* create() {
            return il2cpp::create_object<app::IKSolver_Point__Array>(get_class());
        }
    } // namespace IKSolver_Point__Array
} // namespace app::classes::types

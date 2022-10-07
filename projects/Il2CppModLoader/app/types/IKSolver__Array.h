#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolver__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolver__Array__Class** type_info;
        inline app::IKSolver__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolver__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolver[]");
        }
        inline app::IKSolver__Array* create() {
            return il2cpp::create_object<app::IKSolver__Array>(get_class());
        }
    } // namespace IKSolver__Array
} // namespace app::classes::types
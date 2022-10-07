#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Constraints {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Constraints__Class** type_info;
        inline app::Constraints__Class* get_class() {
            return il2cpp::get_class<app::Constraints__Class>(type_info, "RootMotion.FinalIK", "Constraints");
        }
        inline app::Constraints* create() {
            return il2cpp::create_object<app::Constraints>(get_class());
        }
    } // namespace Constraints
} // namespace app::classes::types
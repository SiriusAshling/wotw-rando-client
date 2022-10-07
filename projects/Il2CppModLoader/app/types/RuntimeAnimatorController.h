#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeAnimatorController {
        namespace {
            app::RuntimeAnimatorController__Class* type_info_ref = nullptr;
        }
        app::RuntimeAnimatorController__Class** type_info = &type_info_ref;
        inline app::RuntimeAnimatorController__Class* get_class() {
            return il2cpp::get_class<app::RuntimeAnimatorController__Class>(type_info, "UnityEngine", "RuntimeAnimatorController");
        }
        inline app::RuntimeAnimatorController* create() {
            return il2cpp::create_object<app::RuntimeAnimatorController>(get_class());
        }
    } // namespace RuntimeAnimatorController
} // namespace app::classes::types
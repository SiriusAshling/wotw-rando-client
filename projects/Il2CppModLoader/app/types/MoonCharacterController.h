#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonCharacterController {
        namespace {
            app::MoonCharacterController__Class* type_info_ref = nullptr;
        }
        app::MoonCharacterController__Class** type_info = &type_info_ref;
        inline app::MoonCharacterController__Class* get_class() {
            return il2cpp::get_class<app::MoonCharacterController__Class>(type_info, "", "MoonCharacterController");
        }
        inline app::MoonCharacterController* create() {
            return il2cpp::create_object<app::MoonCharacterController>(get_class());
        }
    } // namespace MoonCharacterController
} // namespace app::classes::types

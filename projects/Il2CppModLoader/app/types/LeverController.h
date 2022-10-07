#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeverController {
        namespace {
            app::LeverController__Class* type_info_ref = nullptr;
        }
        app::LeverController__Class** type_info = &type_info_ref;
        inline app::LeverController__Class* get_class() {
            return il2cpp::get_class<app::LeverController__Class>(type_info, "Moon.Setups.MoonLever", "LeverController");
        }
        inline app::LeverController* create() {
            return il2cpp::create_object<app::LeverController>(get_class());
        }
    } // namespace LeverController
} // namespace app::classes::types
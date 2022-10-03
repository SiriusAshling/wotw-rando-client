#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightningController {
        namespace {
            app::LightningController__Class* type_info_ref = nullptr;
        }
        app::LightningController__Class** type_info = &type_info_ref;
        inline app::LightningController__Class* get_class() {
            return il2cpp::get_class<app::LightningController__Class>(type_info, "", "LightningController");
        }
        inline app::LightningController* create() {
            return il2cpp::create_object<app::LightningController>(get_class());
        }
    } // namespace LightningController
} // namespace app::classes::types

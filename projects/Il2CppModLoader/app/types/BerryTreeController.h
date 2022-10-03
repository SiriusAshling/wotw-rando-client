#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BerryTreeController {
        namespace {
            app::BerryTreeController__Class* type_info_ref = nullptr;
        }
        app::BerryTreeController__Class** type_info = &type_info_ref;
        inline app::BerryTreeController__Class* get_class() {
            return il2cpp::get_class<app::BerryTreeController__Class>(type_info, "", "BerryTreeController");
        }
        inline app::BerryTreeController* create() {
            return il2cpp::create_object<app::BerryTreeController>(get_class());
        }
    } // namespace BerryTreeController
} // namespace app::classes::types

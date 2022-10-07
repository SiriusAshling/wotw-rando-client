#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RopeVisualLogic {
        namespace {
            app::RopeVisualLogic__Class* type_info_ref = nullptr;
        }
        app::RopeVisualLogic__Class** type_info = &type_info_ref;
        inline app::RopeVisualLogic__Class* get_class() {
            return il2cpp::get_class<app::RopeVisualLogic__Class>(type_info, "", "RopeVisualLogic");
        }
        inline app::RopeVisualLogic* create() {
            return il2cpp::create_object<app::RopeVisualLogic>(get_class());
        }
    } // namespace RopeVisualLogic
} // namespace app::classes::types
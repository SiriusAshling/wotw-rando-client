#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MovementSettings {
        namespace {
            app::MovementSettings__Class* type_info_ref = nullptr;
        }
        app::MovementSettings__Class** type_info = &type_info_ref;
        inline app::MovementSettings__Class* get_class() {
            return il2cpp::get_class<app::MovementSettings__Class>(type_info, "Moon", "MovementSettings");
        }
        inline app::MovementSettings* create() {
            return il2cpp::create_object<app::MovementSettings>(get_class());
        }
    } // namespace MovementSettings
} // namespace app::classes::types
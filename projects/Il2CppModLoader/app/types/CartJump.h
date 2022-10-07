#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartJump {
        namespace {
            app::CartJump__Class* type_info_ref = nullptr;
        }
        app::CartJump__Class** type_info = &type_info_ref;
        inline app::CartJump__Class* get_class() {
            return il2cpp::get_class<app::CartJump__Class>(type_info, "", "CartJump");
        }
        inline app::CartJump* create() {
            return il2cpp::create_object<app::CartJump>(get_class());
        }
    } // namespace CartJump
} // namespace app::classes::types
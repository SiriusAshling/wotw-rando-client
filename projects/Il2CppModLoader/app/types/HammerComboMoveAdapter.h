#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HammerComboMoveAdapter {
        namespace {
            app::HammerComboMoveAdapter__Class* type_info_ref = nullptr;
        }
        app::HammerComboMoveAdapter__Class** type_info = &type_info_ref;
        inline app::HammerComboMoveAdapter__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveAdapter__Class>(type_info, "Moon.ComboSystem", "HammerComboMoveAdapter");
        }
        inline app::HammerComboMoveAdapter* create() {
            return il2cpp::create_object<app::HammerComboMoveAdapter>(get_class());
        }
    } // namespace HammerComboMoveAdapter
} // namespace app::classes::types
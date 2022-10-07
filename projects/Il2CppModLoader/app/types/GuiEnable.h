#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuiEnable {
        namespace {
            app::GuiEnable__Class* type_info_ref = nullptr;
        }
        app::GuiEnable__Class** type_info = &type_info_ref;
        inline app::GuiEnable__Class* get_class() {
            return il2cpp::get_class<app::GuiEnable__Class>(type_info, "Moon.Gui", "GuiEnable");
        }
        inline app::GuiEnable* create() {
            return il2cpp::create_object<app::GuiEnable>(get_class());
        }
    } // namespace GuiEnable
} // namespace app::classes::types
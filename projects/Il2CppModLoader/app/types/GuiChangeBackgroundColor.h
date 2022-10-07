#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuiChangeBackgroundColor {
        namespace {
            app::GuiChangeBackgroundColor__Class* type_info_ref = nullptr;
        }
        app::GuiChangeBackgroundColor__Class** type_info = &type_info_ref;
        inline app::GuiChangeBackgroundColor__Class* get_class() {
            return il2cpp::get_class<app::GuiChangeBackgroundColor__Class>(type_info, "Moon.Gui", "GuiChangeBackgroundColor");
        }
        inline app::GuiChangeBackgroundColor* create() {
            return il2cpp::create_object<app::GuiChangeBackgroundColor>(get_class());
        }
    } // namespace GuiChangeBackgroundColor
} // namespace app::classes::types
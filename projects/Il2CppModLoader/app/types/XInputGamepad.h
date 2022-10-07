#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XInputGamepad {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XInputGamepad__Class** type_info;
        inline app::XInputGamepad__Class* get_class() {
            return il2cpp::get_class<app::XInputGamepad__Class>(type_info, "J2i.Net.XInputWrapper", "XInputGamepad");
        }
        inline app::XInputGamepad* create() {
            return il2cpp::create_object<app::XInputGamepad>(get_class());
        }
        inline app::XInputGamepad__Boxed* box(app::XInputGamepad value) {
            return il2cpp::box_value<app::XInputGamepad__Boxed>(get_class(), value);
        }
    } // namespace XInputGamepad
} // namespace app::classes::types
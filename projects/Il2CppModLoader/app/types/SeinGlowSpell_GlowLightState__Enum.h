#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_GlowLightState__Enum {
        namespace {
            app::SeinGlowSpell_GlowLightState__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinGlowSpell_GlowLightState__Enum__Class** type_info = &type_info_ref;
        inline app::SeinGlowSpell_GlowLightState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_GlowLightState__Enum__Class>(type_info, "", "SeinGlowSpell", "GlowLightState");
        }
        inline app::SeinGlowSpell_GlowLightState__Enum* create() {
            return il2cpp::create_object<app::SeinGlowSpell_GlowLightState__Enum>(get_class());
        }
    } // namespace SeinGlowSpell_GlowLightState__Enum
} // namespace app::classes::types
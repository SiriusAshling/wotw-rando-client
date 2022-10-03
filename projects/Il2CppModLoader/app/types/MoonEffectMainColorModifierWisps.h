#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectMainColorModifierWisps {
        namespace {
            app::MoonEffectMainColorModifierWisps__Class* type_info_ref = nullptr;
        }
        app::MoonEffectMainColorModifierWisps__Class** type_info = &type_info_ref;
        inline app::MoonEffectMainColorModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectMainColorModifierWisps__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectMainColorModifierWisps");
        }
        inline app::MoonEffectMainColorModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectMainColorModifierWisps>(get_class());
        }
    } // namespace MoonEffectMainColorModifierWisps
} // namespace app::classes::types

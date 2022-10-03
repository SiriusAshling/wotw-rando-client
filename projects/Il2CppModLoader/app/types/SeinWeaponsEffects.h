#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinWeaponsEffects {
        namespace {
            app::SeinWeaponsEffects__Class* type_info_ref = nullptr;
        }
        app::SeinWeaponsEffects__Class** type_info = &type_info_ref;
        inline app::SeinWeaponsEffects__Class* get_class() {
            return il2cpp::get_class<app::SeinWeaponsEffects__Class>(type_info, "", "SeinWeaponsEffects");
        }
        inline app::SeinWeaponsEffects* create() {
            return il2cpp::create_object<app::SeinWeaponsEffects>(get_class());
        }
    } // namespace SeinWeaponsEffects
} // namespace app::classes::types

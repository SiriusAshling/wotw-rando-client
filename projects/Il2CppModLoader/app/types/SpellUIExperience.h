#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIExperience {
        namespace {
            app::SpellUIExperience__Class* type_info_ref = nullptr;
        }
        app::SpellUIExperience__Class** type_info = &type_info_ref;
        inline app::SpellUIExperience__Class* get_class() {
            return il2cpp::get_class<app::SpellUIExperience__Class>(type_info, "", "SpellUIExperience");
        }
        inline app::SpellUIExperience* create() {
            return il2cpp::create_object<app::SpellUIExperience>(get_class());
        }
    } // namespace SpellUIExperience
} // namespace app::classes::types

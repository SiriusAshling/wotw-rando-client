#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinTrapSpell {
        namespace {
            app::SeinTrapSpell__Class* type_info_ref = nullptr;
        }
        app::SeinTrapSpell__Class** type_info = &type_info_ref;
        inline app::SeinTrapSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTrapSpell__Class>(type_info, "", "SeinTrapSpell");
        }
        inline app::SeinTrapSpell* create() {
            return il2cpp::create_object<app::SeinTrapSpell>(get_class());
        }
    } // namespace SeinTrapSpell
} // namespace app::classes::types

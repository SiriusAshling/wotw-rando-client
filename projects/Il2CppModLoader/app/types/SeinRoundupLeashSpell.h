#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinRoundupLeashSpell {
        namespace {
            app::SeinRoundupLeashSpell__Class* type_info_ref = nullptr;
        }
        app::SeinRoundupLeashSpell__Class** type_info = &type_info_ref;
        inline app::SeinRoundupLeashSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinRoundupLeashSpell__Class>(type_info, "", "SeinRoundupLeashSpell");
        }
        inline app::SeinRoundupLeashSpell* create() {
            return il2cpp::create_object<app::SeinRoundupLeashSpell>(get_class());
        }
    } // namespace SeinRoundupLeashSpell
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinTeleportSpell {
        namespace {
            app::SeinTeleportSpell__Class* type_info_ref = nullptr;
        }
        app::SeinTeleportSpell__Class** type_info = &type_info_ref;
        inline app::SeinTeleportSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTeleportSpell__Class>(type_info, "", "SeinTeleportSpell");
        }
        inline app::SeinTeleportSpell* create() {
            return il2cpp::create_object<app::SeinTeleportSpell>(get_class());
        }
    } // namespace SeinTeleportSpell
} // namespace app::classes::types
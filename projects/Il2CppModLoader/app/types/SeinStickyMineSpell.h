#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinStickyMineSpell {
        namespace {
            app::SeinStickyMineSpell__Class* type_info_ref = nullptr;
        }
        app::SeinStickyMineSpell__Class** type_info = &type_info_ref;
        inline app::SeinStickyMineSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinStickyMineSpell__Class>(type_info, "", "SeinStickyMineSpell");
        }
        inline app::SeinStickyMineSpell* create() {
            return il2cpp::create_object<app::SeinStickyMineSpell>(get_class());
        }
    } // namespace SeinStickyMineSpell
} // namespace app::classes::types
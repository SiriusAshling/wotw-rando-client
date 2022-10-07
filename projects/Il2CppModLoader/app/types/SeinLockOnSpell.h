#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLockOnSpell {
        namespace {
            app::SeinLockOnSpell__Class* type_info_ref = nullptr;
        }
        app::SeinLockOnSpell__Class** type_info = &type_info_ref;
        inline app::SeinLockOnSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLockOnSpell__Class>(type_info, "", "SeinLockOnSpell");
        }
        inline app::SeinLockOnSpell* create() {
            return il2cpp::create_object<app::SeinLockOnSpell>(get_class());
        }
    } // namespace SeinLockOnSpell
} // namespace app::classes::types